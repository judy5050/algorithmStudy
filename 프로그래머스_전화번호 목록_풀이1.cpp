//
//  프로그래머스_전화번호 목록.cpp
//  algo
//
//  Created by 박효정 on 2021/09/16.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(),phone_book.end());
    for(int i=0;i<phone_book.size()-1;i++){
        string tmp1=phone_book[i];
        string tmp2=phone_book[i+1];
        bool ch=true;
        if(tmp1.size()>tmp2.size()){
            for(int i=0;i<tmp2.size();i++){
                if(tmp1[i]!=tmp2[i]){
                    ch=false;
                    break;
                }
            }
            if(ch==true){
                answer=false;
                break;
            }
        }else{
            for(int i=0;i<tmp1.size();i++){
                if(tmp1[i]!=tmp2[i]){
                    ch=false;
                    break;
                }
            }
            if(ch==true){
                answer=false;
                break;
            }
        }
        if(answer==false){
            break;
        }
    }
    return answer;
}
