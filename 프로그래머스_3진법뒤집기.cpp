//
//  프로그래머스_3진법뒤집기.cpp
//  algo
//
//  Created by 박효정 on 2021/10/06.
//

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s="";
    vector<int>v;
    while(n!=0&&n!=1&&n!=2){
        s+=to_string(n%3);
        n/=3;
        
    }
    s+=to_string(n);

    int j=0;
    int num=0;
    for(int i=s.size()-1;i>=0;i--){
        num+=(s[i]-'0')*pow(3,j);
        j++;
    }
    
    answer=num;
    return answer;
}
