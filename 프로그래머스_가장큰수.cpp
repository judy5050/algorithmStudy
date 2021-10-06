//
//  프로그래머스_가장큰수.cpp
//  algo
//
//  Created by 박효정 on 2021/10/06.
//

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;


struct ve{
    string str;
    ve(string a){
        str=a;
    }
    
    bool operator <(const ve & b) const{
        if(str[0]!=b.str[0]){
          return str[0]>b.str[0];
            
        }else{
          return str+b.str>b.str+str;
        }
    }
    
};


string solution(vector<int> numbers) {
    string answer = "";
    vector<ve>s;
    for(int i=0;i<numbers.size();i++){
        s.push_back(ve(to_string(numbers[i])));
    }
    sort(s.begin(),s.end());
    

        for(int i=0;i<s.size();i++){
            answer+=s[i].str;
        }
    
    if(answer[0]=='0'){
        answer="0";
    }
 
    return answer;
}
