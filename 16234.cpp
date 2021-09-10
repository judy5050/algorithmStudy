//
//  16234.cpp
//  algo
//
//  Created by 박효정 on 2021/09/10.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int n,l,r;
int arr[51][51];
bool ch=false;
int vis[51][51];
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};


void init(){
    ch=false;
    for(int i=0;i<n;i++){
        fill(vis[i], vis[i]+51, 0);
    }
}

void bfs(int a,int b){
    vis[a][b]=1;
    queue<pair<int, int>>q;
    queue<pair<int, int>>lis;
    q.push({a,b});
    
    int sum=0;
    int cnt=0;
    while(!q.empty()){
        
        int x=q.front().first;
        int y=q.front().second;
        lis.push({x,y});
        sum+=arr[x][y];
        cnt++;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&abs(arr[x][y]-arr[nx][ny])>=l&&abs(arr[x][y]-arr[nx][ny])<=r){
                ch=true;
                if(vis[nx][ny]==0){
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
    }
    
    int val=sum/cnt;
    while(!lis.empty()){
        int x=lis.front().first;
        int y=lis.front().second;
        lis.pop();
        arr[x][y]=val;
    }
    
    
    
    
}



int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int res=0;
    queue<pair<int, int>>q;
    cin>>n>>l>>r;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    while(1)
    {
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0){
                    bfs(i,j);
                }
            }
        }
        
        if(ch==false){
            break;
        }
        init();
        res++;
        
        
        
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
