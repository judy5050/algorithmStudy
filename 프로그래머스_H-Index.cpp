//
//  H-Index.cpp
//  algo
//
//  Created by 박효정 on 2021/06/26.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end(),greater<>());
    int cnt=0;
    for(int i=0;i<citations.size();i++){
        cnt++;
       if(cnt<=citations[i]){
           answer=cnt;
           
       }
        
        
    }
    
    
 
    return answer;
}
