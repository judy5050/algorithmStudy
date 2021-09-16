//
//  프로그래머스_전화번호목록_풀이2.cpp
//  algo
//
//  Created by 박효정 on 2021/09/16.
//
#include <string>
#include <vector>
#include <map>



using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string,int>m;
    for(int i=0;i<phone_book.size();i++){
        m[phone_book[i]]=1;
    }
    
    for(int i=0;i<phone_book.size();i++){
        string tmp="";
        for(int j=0;j<phone_book[i].size();j++){
            tmp+=phone_book[i][j];
            if(m[tmp]&&tmp!=phone_book[i]){
                answer=false;
            }
        }
    }
    return answer;
}



