//
//  프로그래머스_핸드폰번호가리기.cpp
//  algo
//
//  Created by 박효정 on 2021/10/03.
//

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.size();i++){
        if((phone_number.size()-4)<=i){
            answer+=phone_number[i];
        }else{
            answer+='*';
        }
    }
    return answer;
}
