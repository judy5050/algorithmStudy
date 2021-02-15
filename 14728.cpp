//
//  14728.cpp
//  algo
//
//  Created by 박효정 on 2021/02/08.
//

#include <iostream>
#include <algorithm>


using namespace std;

int n,t;
int k[1000],s[1000];
int dp[101][10001];
int go(int i,int w){
        
    if(dp[i][w]>0) return dp[i][w];
    if(i==n) return 0;
    int n1=0;
    if(w+k[i]<=t){
        n1=s[i]+go(i+1,w+k[i]);
        
    }
    int n2=go(i+1,w);
    
    dp[i][w]=max(n1,n2);
    cout<<"dp[i][w] = "<<"i = "<<i<<"w = "<<w <<" " <<dp[i][w]<<"\n";
    return dp[i][w];
    
}


int main()
{
 
  
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>k[i]>>s[i];
    }
    
    cout<<go(0,0)<<"\n";
    
    
    
    
    
    
    
    
    
    return 0;
}
