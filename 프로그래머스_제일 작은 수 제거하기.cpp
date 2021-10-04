//
//  프로그래머스_제일 작은 수 제거하기.cpp
//  algo
//
//  Created by 박효정 on 2021/10/04.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int>tmp;
    tmp=arr;
    //정렬
    sort(tmp.begin(),tmp.end());
    tmp.erase(tmp.begin());
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<tmp.size();j++){
            if(arr[i]==tmp[j]){
                answer.push_back(arr[i]);
                break;
            }
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}
