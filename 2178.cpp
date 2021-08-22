//
//  2178.cpp
//  algo
//
//  Created by 박효정 on 2021/08/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct qu{
    int x,y,cnt;
    qu(int a,int b,int c){
        x=a;
        y=b;
        cnt=c;
    }
};


int dx[]={-1,0,0,1};
int dy[]={0,-1,1,-0};
int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n>>m;
    string str;
    vector<vector<int>>v(n,vector<int>(m));
    vector<vector<int>>vis(n,vector<int>(m));
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<str.size();j++){
            v[i][j]=str[j]-'0';
        }
    }
    
    //bfs
    
    queue<pair<int, int>>q;
    q.push({0,0});
    vis[0][0]=1;
    while(!q.empty()){
    
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m){
                continue;
            }
            if(vis[nx][ny]==0&&v[nx][ny]==1){
                q.push({nx,ny});
                vis[nx][ny]=vis[x][y]+1;
            }
        }
        
        
        
        
        
        
        
    }
    
    
    cout<<vis[n-1][m-1]<<"\n";
    
    
    
    
    return 0;
}
