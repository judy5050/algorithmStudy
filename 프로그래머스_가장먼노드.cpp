#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

queue<pair<int,int>>q;
//방문 기록+ 거리 기록용
vector<int> dis(20001);
vector<int>v[20001];
void bfs(){
   
    while(!q.empty()){
         int node=q.front().first;
         int score=q.front().second;
         q.pop();
        for(int i=0;i<v[node].size();i++){
            if(dis[v[node][i]]==0){
                dis[v[node][i]]=score+1;
                q.push({v[node][i],score+1});
                
            }
        }
        
        
    }
}


int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
   
    //연결 정보 저장
    for(int i=0;i<edge.size();i++){
            int start=edge[i][0];
            int end=edge[i][1];
        
            v[start].push_back(end);
            v[end].push_back(start);
            
        }
   
    dis[1]=1;
    q.push({1,0});
    bfs();
    int high=0;
    for(int i=2;i<=n;i++){
        high=max(dis[i],high);
    }

    for(int i=2;i<=n;i++){
        if(high==dis[i])
        {
            answer++;
        }
    }

    return answer;
}
