//
//  프로그래머스_JadenCase문자열만들기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/30.
//

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index=0;
    while(index<s.size()){
        while(index<s.size()&&s[index]==' '){
            
            index++;
        }
        
  
        if(s[index]>='a'&&s[index]<='z'){
            s[index]-=('a'-'A');
          
        }
        
         while(index<s.size()&&s[index]!=' '){
            
            index++;
             if(s[index]>='A'&&s[index]<='Z'){
                  s[index]+=('a'-'A');
             }
        }
        
        
    }
    answer=s;
    
    return answer;
}
