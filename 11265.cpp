//
//  11265.cpp
//  algo
//
//  Created by 박효정 on 2021/10/04.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define INF 2147000000
using namespace std;

long long graph[501][501];
int n,m;
void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i!=j){
                graph[i][j]=INF;
            }else{
                graph[i][j]=0;
            }
            
        }
    }
    
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
   
    cin>>n>>m;
    
    init();
    
    
    //input
    for (int i=0;i<n; i++) {
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    
    
    for(int i=0;i<m;i++){
        int a,b;
        long long c;
        cin>>a>>b>>c;
        if(graph[a-1][b-1]<=c){
            cout<<"Enjoy other party"<<"\n";
        }else{
            cout<<"Stay here"<<"\n";
        }
    }
    
    
    
    
    
    return 0;
}
