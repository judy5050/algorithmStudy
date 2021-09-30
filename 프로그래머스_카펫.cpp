//
//  프로그래머스_카펫.cpp
//  algo
//
//  Created by 박효정 on 2021/10/01.
//

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum=brown+yellow;
    for(int i=1;i<=sum;i++){
        for(int j=i;j<=sum;j++){
            if(i*j>=sum){
                if(i*j==sum){
                    
                    int w=max(i,j);
                    int h=min(i,j);
                    if((w-2)*(h-2)==yellow){
                        answer.push_back(w);
                        answer.push_back(h);
                    }
                }else{
                    break;
                }
            }
        }
    }
    return answer;
}
