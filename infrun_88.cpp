//
//  infrun_88.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n,map[10][10],dis[10][10];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

struct loc{
    int x;
    int y;
    loc(int a,int b){
        x=a;
        y=b;
    }
    
    
};


queue<loc> q;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            cin>>map[i][j];
        }
    }
    
    q.push(loc{1,1});
    map[1][1]=1;
    while (!q.empty()) {
        loc tmp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int xx=tmp.x+dx[i];
            int yy=tmp.y+dy[i];
            if(map[xx][yy]==0&&xx>=1&&xx<=7&&yy>=1&&yy<=7){
                q.push(loc(xx,yy));
                map[xx][yy]=1;
                dis[xx][yy]=dis[tmp.x][tmp.y]+1;
            }
        }
    }
    
    
    cout<<dis[7][7]<<"\n";
    
    
    
    return 0;
}
