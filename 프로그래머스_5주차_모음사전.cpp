//
//  5주차_모음사전.cpp
//  algo
//
//  Created by 박효정 on 2021/09/09.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> v={'A','E','I','O','U'};
vector<string>lis;

void dfs(int len,string str){
    
    if(str.size()==len){
        
        lis.push_back(str);
        return;
    }
    
    for(int j=0;j<5;j++){
        dfs(len,str+v[j]);
    }
    
    
}

int solution(string word) {
    int answer = 0;
    
     for(int i=1;i<=5;i++){
        dfs(i,"");
    }
    
    sort(lis.begin(), lis.end());
    
    for(int i=0;i<lis.size();i++){
        answer++;
        if(word==lis[i]){
            break;
        }
    }
    
    
    return answer;
}
