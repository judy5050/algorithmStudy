//
//  11052_1.cpp
//  algo
//
//  Created by 박효정 on 2021/10/29.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
int dp[1001];
int card[1001];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>card[i];
    }
    
    dp[1]=card[1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i]=max(dp[i],dp[i-j]+card[j]);
        }
    }
    
    
    cout<<dp[n]<<"\n";
    
    return 0;
}
