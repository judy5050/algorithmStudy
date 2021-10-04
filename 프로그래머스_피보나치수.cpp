//
//  프로그래머스_피보나치수.cpp
//  algo
//
//  Created by 박효정 on 2021/10/04.
//

#include <iostream>
#include <vector>


using namespace std;

int dp[100001];
int fibo(int i){
    if(i==0||i==1){
        return dp[i];
    }
    else if(dp[i]!=0){
        return dp[i]%1234567;
    }else{
         return dp[i]=(fibo(i-1)+fibo(i-2))%1234567;
    }
}

int solution(int n) {
    int  answer = 0;
    dp[0]=0;
    dp[1]=1;
    fibo(n);
    answer=dp[n];
    return answer;
}
