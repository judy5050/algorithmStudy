//
//  1987.cpp
//  algo
//
//  Created by 박효정 on 2021/04/22.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int r,c;
char map[21][21];
int res;
int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};
int ch[91];
void dfs(int a,int b,int cnt){
    
    if(cnt>res){
        res=cnt;
    }else{
        res=res;
    }
    
        int nx;
        int ny;
        for(int i=0;i<4;i++){
            nx=a+dx[i];
            ny=b+dy[i];
            if(nx>=0&&ny>=0&&nx<r&&ny<c){
                if(ch[map[nx][ny]]==0){
//                    cout<<map[nx][ny];
                      ch[map[nx][ny]]=1;
                      dfs(nx,ny,cnt+1);
                      ch[map[nx][ny]]=0;
                }
            }
        }
    
    
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>r>>c;
    
    //입력
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>map[i][j];
        }
    }

    
    ch[map[0][0]]=1;
    dfs(0, 0, 1);
    cout<<res<<"\n";
    
    
    
    return 0;
}
