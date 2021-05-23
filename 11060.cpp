//
//  11060.cpp
//  algo
//
//  Created by 박효정 on 2021/05/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int arr[1001];
int n;
int dp[1001]={2147000000,};
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
    for(int i=0;i<n;i++){
        dp[i]=2147000000;
    }
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+arr[i];j++){
            if(j>=n)
                break;
            dp[j]=min(dp[j],dp[i]+1);
        }
    }
    if(dp[n-1]==2147000000){
        cout<<-1<<"\n";
    }
    else{
        cout<<dp[n-1]<<"\n";
    }
    
    return 0;
}
