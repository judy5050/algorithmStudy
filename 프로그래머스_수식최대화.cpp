//
//  프로그래머스_수식최대화.cpp
//  algo
//
//  Created by 박효정 on 2021/06/30.
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long cal(long long num1,long long num2,char o){
    if(o=='*'){
        return num1*num2;
        
    }
    else if(o=='-'){
        return num1-num2;
    }
    else{
        return num1+num2;
    }
}

long long solution(string expression) {
    long long answer = 0;
    vector<char>oper_list={'*','+','-'};
    vector<long long>number;
    vector<char>oper;
    string num="";
    
    for(int i=0;i<expression.size();i++){
        if(expression[i]=='*'||expression[i]=='+'||expression[i]=='-'){
            oper.push_back(expression[i]);
            number.push_back(stoi(num));
            num="";
        }
        else{
            num+=expression[i];
        }
    }
    number.push_back(stoi(num));
    long long res=0;
    do{
        vector<char>tmp_oper=oper;
        vector<long long>tmp_num=number;
        for(int i=0;i<3;i++){
            for(int j=0;j<tmp_oper.size();j++){
                if(tmp_oper[j]==oper_list[i]){
                    tmp_num[j]=cal(tmp_num[j],tmp_num[j+1],tmp_oper[j]);
                    tmp_num.erase(tmp_num.begin()+j+1);
                    tmp_oper.erase(tmp_oper.begin()+j);
                    j--;
                }
            }
        }
        
        
        if(res<abs(tmp_num[0])){
            res=abs(tmp_num[0]);
        }
    }while(next_permutation(oper_list.begin(),oper_list.end()));
    answer=res;
    
    
    
    
    
    
    
    
    return answer;
}
