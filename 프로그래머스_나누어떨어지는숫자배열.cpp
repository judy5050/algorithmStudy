//
//  프로그래머스_나누어떨어지는숫자배열.cpp
//  algo
//
//  Created by 박효정 on 2021/10/08.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]%divisor==0){
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.size()>0){
     sort(answer.begin(),answer.end());
    }else{
        answer.push_back(-1);
    }
  
    
    
    return answer;
}
