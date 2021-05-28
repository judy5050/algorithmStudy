//
//  2206.cpp
//  algo
//
//  Created by 박효정 on 2021/05/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};

//구조체 선언
struct qu{
    
    
    int x,y,cnt,ch;
    
    
};

queue<qu>q;
int arr[1001][1001];
int n,m;
int ch[1001][1001][2];
int res=2147000000;
void bfs(){
    //x좌표 ,y좌표 ,cnt는 탈출하기 까지 이동한 수, flag는 벽을 부순적 있는지 확인용 변수
    //flag=0일경우 아직 벽을 부수지 x
    int x,y,cnt,flag;
    
    while(!q.empty()){
        x=q.front().x;
        y=q.front().y;
        cnt=q.front().cnt;
        flag=q.front().ch;
        q.pop();
        //목표지점에 도착했을 경우
        if(x==n&&y==m){
            res=min(res,cnt);

        }
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>0&&ny>0&&nx<=n&&ny<=m){
                //이동할 수 있는 곳으로 이동 ,벽을 부순적 x
                if(arr[nx][ny]==0&&ch[nx][ny][0]==0&&flag==0){
                    q.push({nx,ny,cnt+1,flag});
                    ch[nx][ny][0]=1;
                }
                //이동할 수 있는곳으로, 벽을 부순적 있음
                else if(arr[nx][ny]==0&&ch[nx][ny][1]==0&&flag==1){
                    q.push({nx,ny,cnt+1,flag});
                    ch[nx][ny][1]=1;
                }
                //벽을 부순적없지만 벽을 부실예정
                if(arr[nx][ny]==1&&ch[nx][ny][1]==0&&flag==0){
                    q.push({nx,ny,cnt+1,1});
                    ch[nx][ny][1]=1;
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
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=m;j++){
            arr[i][j]=s[j-1]-'0';
        }
    }
    
    
    
    q.push({1,1,1,0});
    ch[1][1][0]=1;
    bfs();
    //탈출구로 갈 수 없는 경우 
    if(res!=2147000000){
        cout<<res<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    
    
    
    return 0;
}
