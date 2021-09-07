//
//  프로그래머스_부족한금액계산하기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/07.
//

#include <cmath>
#include <algorithm>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum=money;
    for(int i=1;i<=count;i++){
      sum-=price*i;
    }
    if(sum>=0){
        answer=0;
    }else{
        answer=abs(sum);
    }
    
    return answer;
}
