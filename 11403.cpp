
  11403.cpp
  algo

  Created by 박효정 on 2021/06/02.


#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000
using namespace std;

int graph[101][101];

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    
    //입력
    cin>>n;
    
    //처음 배열의 값 INF로 초기화
    for(int i=1;i<=n;i++){
        fill(graph[i], graph[i]+101,INF );
    }
    
    //만약 i->j로 가는 간선이 없는 경우 INF로 초기화
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>graph[i][j];
            if(graph[i][j]==0){
                graph[i][j]=INF;
            }
        }
        
        
    }
    
    //3중 for문으로 K를 경유해 i->j로 가는 값과 비교한다.
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    
    //갈수 있는 간선이 존재할 경우 해당 배열의 값이 INF가 아니고
    //갈수 있는 간선이 존재하지 않을 경우 해당 배열의 값이 INF일 것 이다.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(graph[i][j]!=INF){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    
    
    return 0;
}
