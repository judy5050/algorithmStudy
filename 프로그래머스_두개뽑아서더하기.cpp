//
//  프로그래머스_두개뽑아서더하기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/28.
//

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

vector<int>v;
vector<pair<int,int>>res;
void dfs(int index,int num){
    
    if(v.size()==2||index>=num){
        if(v.size()==2){
            res.push_back({v[0],v[1]});
            
        }
        return ;
    }
    
    
    v.push_back(index);
    dfs(index+1,num);
    v.pop_back();
    dfs(index+1,num);
    
}

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    dfs(0,numbers.size());
    for(int i=0;i<res.size();i++){
        answer.push_back(numbers[res[i].first]+numbers[res[i].second]);
    }
    
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    
    
    return answer;
}
