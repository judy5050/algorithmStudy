//
//  14501.cpp
//  algo
//
//  Created by 박효정 on 2021/08/03.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int t[17];
int dp[17];
int res;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
   
    cin>>n;
    int a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        
        t[i]=a;
        dp[i]=b;
    }
    
    for(int i=n;i>=1;i--){
        
        if(t[i]+i>n+1){
            dp[i]=dp[i+1];
        }else{
            dp[i]=max(dp[i+1],dp[i]+dp[i+t[i]]);
            res=max(dp[i],res);
        }
        
        
        
    }
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
