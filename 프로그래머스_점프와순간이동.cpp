//
//  프로그래머스_점프와순간이동.cpp
//  algo
//
//  Created by 박효정 on 2021/10/02.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    
    while(n>0){
        if(n%2==0){
            n/=2;
        }else{
            n--;
            ans++;
        }
    }

    return ans;
}
