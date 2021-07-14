//
//  프로그래머스_다트게임.cpp
//  algo
//
//  Created by 박효정 on 2021/07/14.
//

#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    
     stack<int>s;
    
    for(int i=0;i<dartResult.size();){
        string tmp="";
        while(dartResult[i]>='0'&&dartResult[i]<='9'){
            tmp+=dartResult[i++];
        }
        int num=stoi(tmp);
        
        if(dartResult[i]=='D'){
            num=pow(num, 2);
        }else if(dartResult[i]=='S'){
            num=pow(num, 1);
        }
        else if(dartResult[i]=='T'){
            num=pow(num, 3);
        }
        i++;
        if(dartResult[i]=='*'){
        
            if(!s.empty()){
                int t=s.top();
                s.pop();
                s.push(t*2);
            }
            s.push(num*2);
            i++;
        }
        else if(dartResult[i]=='#'){
            s.push(num*-1);
            i++;
            
            
        }else{
            s.push(num);
        }
      
        
        
        
        
    }
    
    while(!s.empty()){
        answer+=s.top();
        s.pop();
    }
    return answer;
}
