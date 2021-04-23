//
//  16956.cpp
//  algo
//
//  Created by 박효정 on 2021/04/23.
//

#include <iostream>
#include <algorithm>
#include <algorithm>
#include <queue>

using namespace std;
char map[501][501];
queue<pair<int,int>>q;
int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};
int ch[501][501];
int no;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio();
    
    
    //세로 가로
    int r,c;
    
    cin>>r>>c;
    
    //좌표 입력
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>map[i][j];
            if(map[i][j]=='W'){
                //늑대가 위치한 곳 상하 좌우에 울타리를 세우기 위해 좌표 저장
                q.push({i,j});
            }
            
        }
    }
    
    while(!q.empty()){
        int xx;
        int yy;
        xx=q.front().first;
        yy=q.front().second;
        q.pop();
        int nx,ny;
        ch[xx][yy]=1;
        for(int i=0;i<4;i++){
                //이동 좌표
                nx=xx+dx[i];
                ny=yy+dy[i];
                if(nx>=0&&ny>=0&&nx<r&&ny<c){
                    if(ch[nx][ny]==0&&map[nx][ny]!='S'&&map[nx][ny]!='W'){
                        //방문 표시
                        ch[nx][ny]=1;
                        
                        //울타리 놓기
                        map[nx][ny]='D';
                        
                    }
                    //바료 인접한 곳에 양 존재시
                    if(ch[nx][ny]==0&&map[nx][ny]=='S'){
                        //방문 표시
                        ch[nx][ny]=1;
                        no=1;
                        
                        
                    }
                }
              
                
                
            
        }
      
    }
    
    if(no==0){
        cout<<1<<"\n";
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<map[i][j];
            }
            cout<<"\n";
        }
    }
    else if(no==1){
        cout<<0<<"\n";
    }
    
    
    
    
    return 0;
}
