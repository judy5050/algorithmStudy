#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    //작업 진도와 속도를 저장하기 위한 큐
    //first가 진도 second가 속도
    queue<pair<int,int>>q;
    
    for(int i=0;i<progresses.size();i++){
        q.push({progresses[i],speeds[i]});
    }
    int cnt=0;
    while(!q.empty()){
        
        int day;
        if((100-q.front().first)%q.front().second==0){
            day=(100-q.front().first)/q.front().second;
        }else{
            day=((100-q.front().first)/q.front().second)+1;
        }
        
        
        while(!q.empty()&&q.front().first+(q.front().second*day)>=100){
            cnt++;
            q.pop();
        }
        answer.push_back(cnt);
        cnt=0;
        
        
    }
    
    
    return answer;
}
