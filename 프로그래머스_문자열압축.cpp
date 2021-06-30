//
//  프로그래머스_문자열압축.cpp
//  algo
//
//  Created by 박효정 on 2021/06/30.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = s.size();//최대 길이임

    for(int i=1;i<=s.size()/2;i++){
        int cnt=1;
        int tmp=0;

        string cur=s.substr(0,i);
        for(int j=i;j<s.size();j+=cur.size()){
            if(cur==s.substr(j,i))//같은 문자열일때
                cnt++;
            else{

                if(cnt==1){
                    tmp+=cur.size();
                }
                else {
                    tmp+=(to_string(cnt).size()+cur.size());

                }
                cur=s.substr(j,i);
                cnt=1;//초기화
            }

        }
        if(cnt==1)
            tmp+=cur.size();
        else
        {
            tmp+=(to_string(cnt).size()+cur.size());

        }
        answer=min(tmp,answer);

    }



    return answer;
}
