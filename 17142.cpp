//
//  17142.cpp
//  algo
//
//  Created by 박효정 on 2021/04/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

//연구소 지도 값 받기
int arr[51][51];
int check[51][51];
int tmp[51][51];
int n,m;
//활성 개수로 들어올수 있는 바이러스 수 최대 10개
int ch[11];
int res=2147000000;
vector<pair<int, int>> virus;
queue<pair<int, int>>q;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
int con=0;
int com;
void bfs(){
   
    while(!q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        int nx;
        int ny;
        for(int i=0;i<4;i++){
                nx=xx+dx[i];
                ny=yy+dy[i];
                if(nx>=0&&ny>=0&&nx<n&&ny<n){
                    if(tmp[nx][ny]==10000){
                        if(arr[nx][ny]==0||arr[nx][ny]==2){
                            tmp[nx][ny]=min(tmp[nx][ny],tmp[xx][yy]+1);
                            q.push({nx,ny});
                        }
                    }
                }
            
        }
      
    }
    
    //바이러스 전체를 퍼트릴수 없는 경우& 최대값으로 받기
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(tmp[i][j]==10000&&arr[i][j]==0){
                con=1;
               
            }
            else if(tmp[i][j]!=10000&&arr[i][j]==0){
                com=max(tmp[i][j],com);
            }
//            cout<<tmp[i][j]<<" ";
        }
//        cout<<"\n";
    }
//    cout<<com<<"\n";
    if(con!=1){
        res=min(com, res);
    }
    con=0;
    com=0;
//    cout<<"\n";
    
}

void spread(int l,int s){
    //바이러스 개수 골랐을때
    if(l==m){
        //초기화
        //활성 바이러스가 없는 곳은 10000
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                tmp[i][j]=10000;
            }
        }
        for(int i=0;i<m;i++){
            //활성 바이러스 인 곳은 0
            tmp[virus[ch[i]].first][virus[ch[i]].second]=0;
            q.push({virus[ch[i]].first,virus[ch[i]].second});
//            cout<<"x좌표 "<<virus[ch[i]].first<<" y좌표"<<virus[ch[i]].second<<"\n";
           
        }
        bfs();
       
        
    }
    //고르는 중
    else{
        for(int i=s;i<virus.size();i++){
            ch[l]=i;
            spread(l+1, i+1);
            
        }
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //입력
            cin>>arr[i][j];
            
            //바이러스 위치 값 따로 좌표 저장,조합 위해
            if(arr[i][j]==2){
                virus.push_back({i,j});
            }
        }
    }
    
    
    spread(0, 0);
    if(res==2147000000){
        cout<<-1<<"\n";
    }else{
        cout<<res<<"\n";
    }
   
    
    
    
    
}
