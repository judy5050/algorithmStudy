//
//  프로그래머스_주식가격.cpp
//  algo
//
//  Created by 박효정 on 2021/07/17.
//

#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
   
    vector<int> answer((int)prices.size());
    
    stack<int>s;
    
    int size=(int)prices.size();
    
    for(int i=0;i<prices.size();i++){
       
        while(!s.empty()&&prices[i]<prices[s.top()]){
            answer[s.top()]=i-s.top();
            s.pop();
        }
        s.push(i);
    }
    
    while(!s.empty()){
       
        answer[s.top()]=size-s.top()-1;
        s.pop();
    }
    
    
    
    
 
    
    
    
    return answer;
}
