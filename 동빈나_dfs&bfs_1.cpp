//
//  동빈나_dfs&bfs_1.cpp
//  algo
//
//  Created by 박효정 on 2021/05/20.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int arr[1001][1001];
int ch[1001][1001];
int n,m;
struct ar{
    int x,y;
    
    
};
ar d[4]={{0,1},{0,-1},{1,0},{-1,0}};
int res;
void bfs(int a,int b){
    int x,y;
    queue<pair<int, int>>q;
    q.push({a,b});
    ch[a][b]=1;
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        int nx,ny;
        for(int i=0;i<4;i++){
            nx=x+d[i].x;
            ny=y+d[i].y;
            if(ch[nx][ny]==0&&arr[nx][ny]==0){
                if(nx>=0&&ny>=0&&nx<n&&ny<m){
                    q.push({nx,ny});
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
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            arr[i][j]=s[j]-'0';
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ch[i][j]==0&&arr[i][j]==0){
                bfs(i,j);
                res++;
            }
        }
    }
    
    cout<<res<<"\n";
    
    return 0;
}
