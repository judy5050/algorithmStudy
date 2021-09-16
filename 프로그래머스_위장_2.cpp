//
//  프로그래머스_위장_2.cpp
//  algo
//
//  Created by 박효정 on 2021/09/16.
//

#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int>m;
    for(int i=0;i<clothes.size();i++){
        m[clothes[i][1]]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        answer*=i->second+1;
    }
    answer-=1;
    
    return answer;
}
