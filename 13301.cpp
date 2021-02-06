//
//  13301.cpp
//  algorithm_study
//
//  Created by 박효정 on 2021/02/06.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
long long dp[82];
int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    
    int num=0;
    cin>>num;
    
    dp[1]=1;
    dp[2]=1;
    
    for(int i=3;i<=num+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    
    long long result=dp[num]*2+dp[num+1]*2;
    
    cout<<result<<"\n";
    
    
    
    
    return 0;
}

