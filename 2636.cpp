//
//  2636.cpp
//  algo
//
//  Created by 박효정 on 2021/08/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>


using namespace std;

int arr[101][101];
int vis[101][101];
int r,c;
int dx[]={0,1,-1,0};
int dy[]={-1,0,0,1};
int cnt=0;
int t=0;
bool ch=true;



void check_hole(){
    
    queue<pair<int, int>>q;
    //매 순간 vis 배열 초기화
    for(int i=0;i<r;i++){
        fill(vis[i], vis[i]+101, 0);
    }
    q.push({0,0});
    arr[0][0]=0;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0||ny<0||nx>=r||ny>=c){
                continue;
            }
            if((vis[nx][ny]==0)&&(arr[nx][ny]==-2||arr[nx][ny]==0)){
                q.push({nx,ny});
                vis[nx][ny]=1;
                arr[nx][ny]=0;
            }
        }
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
}



//매 모든 행 렬 치즈 확인
void change(){
    
  
    //시간 증가
    t++;
    //1시간 뒤에 녹을 치즈 확인
    queue<pair<int, int>>q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                q.push({i,j});
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                   
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        if(nx<0||ny<0||nx>=r||ny>=c){
                            continue;
                        }
                        if(arr[nx][ny]==0){
                            arr[x][y]=-1;
                            break;
                        }
                    }
                    
                }
            }
        }
    }
    
    //치즈 녹이기
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
    
    
    
    
}

//치즈 수 확인하기
void count_cheese(){
    
    cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    
    
    
    
    
}

//모든 치즈 녹았는지 확인

void check(){
    ch=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                ch=false;
              
            }
        }
        if(ch==false){
            break;
        }
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    
    cin>>r>>c;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                arr[i][j]=-2;
            }
        }
    }
    
    while(1){
        
        //치즈 녹은 여부 확인
        check();
        if(ch==true){
            break;
        }
        check_hole();
        //치즈수 확인
        count_cheese();
      
        //치즈 녹이기
        change();
        
        
        
        
        
        
    }
    
    cout<<t<<"\n";
    cout<<cnt<<"\n";
    
    
    
    
    
    return 0;
}
