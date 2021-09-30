//
//  프로그래머스_영어끝말잇기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/30.
//

#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string,int>m;
    m[words[0]]=1;
    int cnt=1;
    //맨 앞 문자
    char c=words[0][words[0].size()-1];
    for(int i=1;i<words.size();i++){
        if(words[i][0]==c&&m[words[i]]==0){
            cnt++;
            m[words[i]]=1;
            c=words[i][words[i].size()-1];
        }else{
           
            break;
        }
    }
    
    if(cnt==words.size()){
        answer.push_back({0});
        answer.push_back({0});
    }else{
        int num=(cnt%n)+1;
        int index=(cnt/n)+1;
        answer.push_back(num);
         answer.push_back(index);
    }
   

    return answer;
}
