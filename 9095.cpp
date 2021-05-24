//
//  9095.cpp
//  algo
//
//  Created by 박효정 on 2021/05/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int cnt;
    cin>>cnt;
    while(cnt--){
        int n;
        cin>>n;
        vector<int>dp(n+1);
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        
        cout<<dp[n]<<"\n";
    }
 
    return 0;
}
