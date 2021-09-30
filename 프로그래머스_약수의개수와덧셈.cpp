//
//  프로그래머스_약수의개수와덧셈.cpp
//  algo
//
//  Created by 박효정 on 2021/09/30.
//

#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int i=left;i<=right;i++){
        double num=sqrt(i);
        //제곱근으로 해당 수를 표현할 수 있으면
        if(num-(int)num==0.0){
            answer-=i;
        }else{
            answer+=i;
        }
    }
    return answer;
}
