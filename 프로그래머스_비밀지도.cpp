//
//  프로그래머스_비밀지도.cpp
//  algo
//
//  Created by 박효정 on 2021/10/04.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0;i<arr1.size();i++){
        int num=arr1[i]|arr2[i];
        string tmp="";
        while(tmp.size()<n){
            if(num%2==0){
                tmp+=' ';
            }else{
                tmp+='#';
            }
            num/=2;
        }
        reverse(tmp.begin(),tmp.end());
        answer.push_back(tmp);
    }
    
    
    
    
    
    
    return answer;
}
