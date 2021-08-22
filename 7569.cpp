//
//  7569.cpp
//  algo
//
//  Created by 박효정 on 2021/08/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int arr[101][101][101];
int vis[101][101][101];
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
int dh[]={-1,1};
struct qu{
    int x,y,h,val;
    qu(int a,int b,int c,int d){
        h=a;
        x=b;
        y=c;
        val=d;
    }
};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int m,n,hei;
    
    cin>>m>>n>>hei;
    queue<qu>q;
    //높이
    for(int i=0;i<hei;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>arr[i][j][k];
                //익은 토마토 좌표 저장
                if(arr[i][j][k]==1){
                    q.push({i,j,k,0});
                }
            }
        }
    }
    
    while(!q.empty()){
        int h=q.front().h;
        int x=q.front().x;
        int y=q.front().y;
        int val=q.front().val;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            int cnt=val+1;
            if(nx<0||ny<0||nx>=n||ny>=m){
                continue;
            }
            if(vis[h][nx][ny]==0&&arr[h][nx][ny]==0){
                q.push({h,nx,ny,cnt});
                vis[h][nx][ny]=cnt;
                arr[h][nx][ny]=1;
            }
        }
        
        for(int i=0;i<2;i++){
            int cnt=val+1;
            int nh=h+dh[i];
            if(nh<0||nh>=hei){
                continue;
            }
            if(vis[nh][x][y]==0&&arr[nh][x][y]==0){
                q.push({nh,x,y,cnt});
                vis[nh][x][y]=cnt;
                arr[nh][x][y]=1;
            }
        }
        
        
        
        
        
    }
    
    bool ch=true;
    int res=0;
    
    for(int i=0;i<hei;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
               
                if(arr[i][j][k]==0){
                    ch=false;
                    break;
                }
                res=max(res,vis[i][j][k]);
            }
        }
    }
    
    
    if(ch==true){
        cout<<res<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    
    
    
    
    return 0;
}
