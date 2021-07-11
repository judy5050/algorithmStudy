//
//  프로그래머스_신규아이디추천.cpp
//  algo
//
//  Created by 박효정 on 2021/07/10.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    string new_id="123_.def";
    string answer="";
    
    
    
    //대문자->소문자 치환
    for(int i=0;i<new_id.size();i++){
        if(new_id[i]>='A'&&new_id[i]<='Z'){
            new_id[i]=new_id[i]+32;
        }
    }
    
    
    //소문자 ,.,-,_을 제외한 모든 문자 삭제
    for(int i=0;i<new_id.size();i++){
        if((new_id[i]<'0'||new_id[i]>'9')&&(new_id[i]<'a'||new_id[i]>'z')&&new_id[i]!='.'&&new_id[i]!='-'&&new_id[i]!='_'){
            new_id.erase(i,1);
            i--;
        }
    }
    
    //마침표가 두번이상 반복된 부분을 하나의 마침표로 치환
    for(int i=1;i<new_id.size();i++){
        if(new_id[i]=='.'&&new_id[i-1]=='.'){
            new_id.erase(i,1);
            i--;
        }
    }
    
    //문자열의 처음 혹은 끝에 마침표 존재시 삭제
    if(new_id!=""&&new_id[0]=='.'){
        new_id.erase(0,1);
    }
    if(new_id!=""&&new_id[new_id.size()-1]=='.'){
        new_id.erase(new_id.size()-1,1);
        
    }
    
    //빈 문자열이라면 new_id 에 "a"를  대입
    if(new_id.empty()){
        new_id+='a';
    }
    
    //문자열이 16자 이상일경우 첫~15번째 문자열을 제외한 문자열을 모두 삭제
    if(new_id.size()>15){
        new_id.erase(15);
    }
    
    //문자열의 처음 혹은 끝에 마침표 존재시 삭제
    if(new_id!=""&&new_id[0]=='.'){
        new_id.erase(0,1);
    }
    if(new_id!=""&&new_id[new_id.size()-1]=='.'){
        new_id.erase(new_id.size()-1,1);
        
    }
    
    //new_id의 길이가 2자 이하라면 new_id의 마지막 문자를 new_id의 길이가 3이 될때까지 반복해 끝에 붙여라
    if(new_id.size()<=2){
        while(new_id.size()<=3){
            new_id+=new_id[new_id.size()-1];
        }
    }
    
    answer=new_id;
    
    cout<<answer<<"\n";
    return 0;
}
