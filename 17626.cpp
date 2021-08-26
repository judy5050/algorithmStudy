////
////  17626.cpp
////  algo
////
////  Created by 박효정 on 2021/08/25.
////
//
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int INF = 987654321;

int main(){
    int n;
    int dp[50001];

    cin >> n;
    fill(dp, dp+n+1, INF);

    int i = 1;
    while(true) {
        if (i*i > 50000) {
            break;
        }
        dp[i*i] = 1;
        i++;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= int(sqrt(i)); j++) {
            dp[i] = min(dp[i], dp[i-j*j] + dp[j*j]);
        }
    }
    cout << dp[n] << endl;

    return 0;
}
