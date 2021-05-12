//
//  18405.cpp
//  algo
//
//  Created by 박효정 on 2021/05/12.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n,k;
int s,x,y;
int arr[201][201];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
struct qu{
    int vir;
    int x;
    int y;
    int t;
    qu(int a,int b,int c,int d){
        vir=a;
        x=b;
        y=c;
        t=d;
    }
    
    bool operator<(const qu &b) const{
        if(t==b.t){
            //바이러스 적은 순
            return vir>b.vir;}
        
          //시간 적은 순
        
            return t>b.t;
        
        
    }
    
};

priority_queue<qu>pq;;


void bfs(){
    int x,y;
    int time;
    int vir_num;
    while(!pq.empty()){
        x=pq.top().x;
        y=pq.top().y;
        time=pq.top().t;
        vir_num=pq.top().vir;
        pq.pop();
        if(time>=s){
            return;
        }
        int nx,ny;
        for(int i=0;i<4;i++){
            nx=x+dx[i];
            ny=y+dy[i];
            if(nx>0&&ny>0&&nx<=n&&ny<=n){
                if(arr[nx][ny]==0&&arr[x][y]!=0){
                    pq.push(qu{arr[x][y],nx,ny,time+1});
                    arr[nx][ny]=arr[x][y];
                   
                }
            }
            
        }
        
        
        
    }

}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n>>k;
    //입력
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    
    
    cin>>s>>x>>y;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]!=0){
                pq.push(qu{arr[i][j],i,j,0});
            }
        }
    }
    
    
    bfs();
    
    cout<<arr[x][y]<<"\n";
   
    
    
    
    return 0;
}
