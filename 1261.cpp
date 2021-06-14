//
//  1261.cpp
//  algo
//
//  Created by 박효정 on 2021/06/14.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 101
using namespace std;



struct qu{
    int x;
    int y;
    int val;
    
    qu(int a,int b,int c){
        x=a;
        y=b;
        val=c;
    }
    
    bool operator<(const qu & b)const{
        return val>b.val;
    }
    
    
    
};
//가로 세로
int n,m;
priority_queue<qu> q;
int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};
int v[101][101];
int vis[101][101];
int res=2147000000;
void bfs(){
    
    while(!q.empty()){
        int x=q.top().x;
        int y=q.top().y;
        int val=q.top().val;
        if(x==n&&y==m){
            res=val;
            break;
        }
        q.pop();
        for(int i=0;i<4;i++){
            int nx;
            int ny;
            int cnt;
            nx=x+dx[i];
            ny=y+dy[i];
            cnt=val;
            if(nx>0&&nx<=n&&ny>0&&ny<=m){
                if(vis[nx][ny]==0){
                    if(v[nx][ny]==1){
                        vis[nx][ny]=1;
                        q.push(qu(nx,ny,cnt+1));
                    }
                    else if(v[nx][ny]==0){
                        vis[nx][ny]=1;
                        q.push(qu(nx,ny,cnt));
                    }
                }
            }
        }
        
        
        
        
        
    }
    
    
    
    
    
    
    
}



int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
   
    cin>>m>>n;
    
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            v[i][j+1]=s[j]-'0';
        }
    }
  
    q.push(qu(1,1,0));
    vis[1][1]=1;
    bfs();
    
    cout<<res<<"\n";
    
    
    
}
