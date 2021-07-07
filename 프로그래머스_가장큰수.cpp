//
//  프로그래머스_가장큰수.cpp
//  algo
//
//  Created by 박효정 on 2021/07/07.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
using namespace std;

#include <string>
#include <vector>
#include <algorithm>


using namespace std;


bool cmp(string &a,string &b){
    return a+b>b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    answer="";
  vector<string>v;
 
    for(int i=0;i<numbers.size();i++){
        v.push_back(to_string(numbers[i]));
    }
    
    sort(v.begin(), v.end(),cmp);
    
    if(v[0]=="0"){
        answer="0";
        
    }else{
        for(int i=0;i<numbers.size();i++){
        answer+=v[i];
    }
    }

    
    
    return answer;
}
