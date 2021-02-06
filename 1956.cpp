//
//  1956.cpp
//  algorithm_study
//
//  Created by 박효정 on 2021/02/06.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
vector<int> v;
int dp[1001];
int arr[1001];
int res=0;
int main(){

    std::ios::sync_with_stdio(false);
    
    cin.tie(0);
    cout.tie(0);
    
    int num;
    cin>>num;
    
    for(int i=1;i<=num;i++){
        
        cin>>arr[i];
    }
    
    
    for(int i=1;i<=num;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(arr[i]>arr[j]&&dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
          }
        }
       
        if(res<dp[i]){
            res=dp[i];
        }
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    
    
    
    return 0;
}
