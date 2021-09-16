//
//  프로그래머스_위장.cpp
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
    
    //옷 종류 확인
    map<string,int>lis;
    for(int i=0;i<clothes.size();i++){
        lis[clothes[i][1]]=1;
    }
   
    map<string,int>m;
    vector<string>v;
    
    for(auto i=lis.begin();i!=lis.end();i++){
        v.push_back(i->first);
    }
   
    int pos=0;
  
    vector<string>list(v.size());
    
    for(int i=0;i<clothes.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[j]==clothes[i][1]){
                list[j].push_back(1);
            }
        }
    }
    
   
    for(int j=0;j<v.size();j++){
         list[j].push_back(1);
    }

    for(int j=0;j<v.size();j++){
        answer*=list[j].size();
    }
    answer-=1;
    
    return answer;
}
