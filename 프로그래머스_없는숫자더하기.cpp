//
//  프로그래머스_없는숫자더하기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/15.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int>vis(10);
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size();i++){
        vis[numbers[i]]=1;
    }
    
    for(int i=0;i<=9;i++){
        if(vis[i]==0){
            answer+=i;
        }
    }
    
    return answer;
}
