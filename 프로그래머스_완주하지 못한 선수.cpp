//
//  프로그래머스_완주하지 못한 선수.cpp
//  algo
//
//  Created by 박효정 on 2021/07/08.
//

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
      map<string,int>m;
    for(int i=0;i<participant.size();i++){
        m[participant[i]]++;
       
    }
    
    for(int i=0;i<completion.size();i++){
        m[completion[i]]--;
        
       
    }
    
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second!=0){
            answer=i->first;
        }
    }
    return answer;
}
