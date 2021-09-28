//
//  프로그래머스_체육복.cpp
//  algo
//
//  Created by 박효정 on 2021/09/28.
//
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int>v(n+1);
    //체육복이 있으면 0 없으면 1
    for(int i=0;i<lost.size();i++){
        v[lost[i]]=1;
    }
    //여분이 있지만, 체육복을 잃어버렸을 경우 -1
    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]==reserve[j]){
                v[lost[i]]=-1;
            }
        }
    }
    
    sort(reserve.begin(),reserve.end());
    for(int i=0;i<reserve.size();i++){
        if(reserve[i]-1>=1&&v[reserve[i]-1]==1&&v[reserve[i]]==0){
            v[reserve[i]-1]=0;
        }else if(reserve[i]+1<=n&&v[reserve[i]+1]==1&&v[reserve[i]]==0){
            v[reserve[i]+1]=0;
        }
    }

    
    for(int i=1;i<=n;i++){
        if(v[i]==0||v[i]==-1){
            answer++;
        }
    }
    
    
    return answer;
}
