//
//  프로그래머스_프린터.cpp
//  algo
//
//  Created by 박효정 on 2021/06/25.
//

#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>>q;
    priority_queue<int>pq;
    for(int i=0;i<priorities.size();i++){
        q.push({priorities[i],i});
        pq.push(priorities[i]);
    }
    
    vector<int>res((int)priorities.size());
    int cnt=1;
    while(!q.empty()){
        if(pq.top()==q.front().first){
            
            res[q.front().second]=cnt;
            cnt++;
            pq.pop();
            q.pop();
        }else{
            int tmp1=q.front().first;
            int tmp2=q.front().second;
            q.pop();
            q.push({tmp1,tmp2});
            
        }
        
        
        
    }
    
    answer=res[location];
    return answer;
    
}
