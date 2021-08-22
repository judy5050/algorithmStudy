//
//  16918.cpp
//  algo
//
//  Created by 박효정 on 2021/08/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
vector<vector<int>>v(201,vector<int>(201));
int r,c,n;
int t =0;
//struct ve{
//    int x,y,val,check;
//
//    ve(int a,int b,int c,int d){
//        x=a;
//        y=b;
//        val=c;
//        check=d;
//    }
//
//
//
//
//
//};

void plusBoom(){
    t++;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            //폭탄 심기
            
                v[i][j]+=1;
            
            
        }
    }
    
    
    
    
    
    
}

void plusTime(){
    
    t++;
    // 1초 흐르는 시간
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]!=-1){
                v[i][j]+=1;
            }
            
        }
    }
    
    
}

void boom(){
    
    plusTime();
    vector<vector<int>>vis(201,vector<int>(201));
    queue<pair<int, int>>q;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            //터질수 있는 폭탄 추가
            if(v[i][j]==3){
                q.push({i,j});
                v[i][j]=-1;
            }
            
        }
    }
    
    
    while (!q.empty()) {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0||ny<0||nx>=r||ny>=c){
                continue;
            }
            if(vis[nx][ny]==0&&v[nx][ny]!=-1){
                vis[nx][ny]=1;
                v[nx][ny]=-1;
            }
        }
    }
    
    
    
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
   
    
    cin>>r>>c>>n;
    
 
    
    for(int i=0;i<r;i++){
    
        string input;
        cin>>input;
        for(int j=0;j<input.size();j++){
            //폭탄이면 0이상의 값
            if(input[j]=='O'){
                v[i][j]=0;
            }else{//폭탄이 아니면 -1
                v[i][j]=-1;
            }
        }
          
            
        
    }
    
 
    
    //처음 1초 흐름
    plusTime();
  
    while(1){
        if(t>=n){
            break;
        }
        //폭탄 심기
        plusBoom();
        if(t>=n){
            break;
        }
        boom();
    }
  
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]!=-1){
                cout<<'O';
            }else{
                cout<<'.';
            }
            
        }
        cout<<"\n";
    }
    
 
    
    
    
    
    return 0;
}
