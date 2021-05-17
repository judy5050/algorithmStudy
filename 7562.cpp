//
//  7562.cpp
//  algo
//
//  Created by 박효정 on 2021/05/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
struct dir{
    int x,y;
};
struct qu{
    int x,y,val;
};

dir dx[8]={{-1,2},{1,2},{2,1},{-2,1},{2,-1},{-2,-1},{-1,-2},{1,-2}};
int test;

int len,s_x,s_y,end_x,end_y;
int ch[301][301];
vector<int>res;
int cnt;
queue<qu>q;
void bfs()
{
   
    int x, y;
    while(!q.empty()){
        x=q.front().x;
        y=q.front().y;
        cnt=q.front().val;
        q.pop();
        int nx,ny;
        if(x==end_x&&y==end_y){
            res.push_back(cnt);
            break;
        }
        for(int i=0;i<8;i++){
            nx=x+dx[i].x;
            ny=y+dx[i].y;
            if(nx>=0&&ny>=0&&nx<len&&ny<len){
                if(ch[nx][ny]==0){
                    ch[nx][ny]=1;
                    q.push({nx,ny,cnt+1});
                }
            }
           
        }
    }

    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>test;
  
    while(test--){
        cin>>len;
        cin>>s_x>>s_y;
        cin>>end_x>>end_y;
        q.push({s_x,s_y,0});
        bfs();
        memset(ch, 0, sizeof(ch));
        while(!q.empty()){
            q.pop();
        }
        
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
    
    
    
    return 0;
}
