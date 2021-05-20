//
//  동빈나_dfs&bfs_2.cpp
//  algo
//
//  Created by 박효정 on 2021/05/20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int arr[201][201];
int n,m;
int res;
int ch[201][201];
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
struct qu{
    
    int x,y,val;
    
    
    
};
queue<qu> q;

void bfs(int a,int b){
    int x,y,cnt;
    q.push({a,b,1});
    while(!q.empty()){
        x=q.front().x;
        y=q.front().y;
        cnt=q.front().val;
        q.pop();
        ch[x][y]=1;
        int nx,ny;
        if(x==n&&y==m){
            res=cnt;
            break;
        }
        for(int i=0;i<4;i++){
            nx=x+dx[i];
            ny=y+dy[i];
            if(nx>0&&ny>0&&nx<=n&&ny<=m){
                if(arr[nx][ny]==1&&ch[nx][ny]==0){
                    q.push({nx,ny,cnt+1});
                    ch[nx][ny]=1;
                }
            }
        }
        
        
        
        
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    string s;
    //입력
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=m;j++){
            arr[i][j]=s[j-1]-'0';
        }
    }
    
   
    bfs(1,1);
    
    cout<<res<<"\n";
    
    
    
    
    
    
    return 0;
}
