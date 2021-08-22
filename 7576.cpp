//
//  7576.cpp
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
    int x,y,val;
    
    qu(int a,int b,int c){
        x=a;
        y=b;
        val=c;
    }
};

int dx[]={-1,0,0,1};
int dy[]={0,1,-1,-0};

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    int res=-1;
    bool ch=true;
    cin>>m>>n;
    queue<qu>q;
    vector<vector<int>>v(n,vector<int>(m));
    vector<vector<int>>vis(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                q.push(qu{i,j,0});
            }
        }
    }
    
    //bfs
    
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        int val=q.front().val;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            int cnt=val+1;
            if(nx<0||ny<0||nx>=n||ny>=m)
                continue;
            if(vis[nx][ny]==0&&v[nx][ny]==0){
                q.push(qu{nx,ny,cnt});
                vis[nx][ny]=cnt;
                v[nx][ny]=1;
            }
        }
        
        
        
    }
    
    //토마토 익음 여부 확인
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                ch=false;
                break;
            }
            res=max(res,vis[i][j]);
        }
    }
    
    
    
    
    if(ch==true){
        cout<<res<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    
    
    
    
    return 0;
}

