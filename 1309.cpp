//
//  1309.cpp
//  algo
//
//  Created by 박효정 on 2021/10/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000000
#define MOL 9901
using namespace std;

int n;
int dp[MAX][3];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n;
    
    dp[1][0]=1;
    dp[1][1]=1;
    dp[1][2]=1;
    for(int i=2;i<=n;i++){
        dp[i][0]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%MOL;
        dp[i][1]=(dp[i-1][0]+dp[i-1][2])%MOL;
        dp[i][2]=(dp[i-1][0]+dp[i-1][1])%MOL;
    }
    
    
    cout<<(dp[n][0]+dp[n][1]+dp[n][2])%MOL<<"\n";
    
    
    
    
    return 0;
}
