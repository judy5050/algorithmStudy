//
//  algo_61.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n,num;
int l;
int arr[101];
int ch[101];
int sum;
int check;
void dfs(int le){
    
   
    if(le==n){
        for(int i=0;i<n;i++){
            if(ch[i]==1){
                sum+=arr[i];
            }
        }
        if(sum==num){
            check=1;
            return ;
        }
        sum=0;
    }
    else{
        ch[le]=1;
        dfs(le+1);
        
        ch[le]=0;
        dfs(le+1);
        
        
        
        
    }
    
    
    
}



int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>num;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    dfs(l);
    
    if(check==1){
        cout<<"YES"<<"\n";
    }
    else if(check==0){
        cout<<"NO"<<"\n";
    }
    
    
    
    return 0;
}
