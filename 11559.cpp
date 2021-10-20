//
//  11559.cpp
//  algo
//
//  Created by 박효정 on 2021/10/20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

char arr[12][6];
int vis[12][6];
bool ch=false;
int dx[]={0,1,-1,0};
int dy[]={-1,0,0,1};
int res=0;

//터질 뿌요 존재 확인
void check(int a,int b){
    queue<pair<int, int>>q;
    char c=arr[a][b];
    vis[a][b]=1;
    q.push({a,b});
    int cnt=1;
    while(!q.empty()){
      
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<12&&ny>=0&&ny<6){
                if(vis[nx][ny]==0&&c==arr[nx][ny]){
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                    cnt++;
                }
            }
            
            
            
        }

    }
    
    //뿌요 터트리기
    if(cnt>=4){
        ch=true;
        for(int i=0;i<12;i++){
            for(int j=0;j<6;j++){
                //터트릴 뿌요
                if(vis[i][j]==1){
                    arr[i][j]='.';
                    vis[i][j]=-1;
                }
            }
        }
        
        
        
        
    }else{
        for(int i=0;i<12;i++){
            for(int j=0;j<6;j++){
                if(vis[i][j]==1){
                    //방문만 함
                    vis[i][j]=-1;
                }
            }
        }
        
    }
    
    
    
}

void init(){
    
    for(int i=0;i<11;i++){
        fill(vis[i], vis[i]+6, 0);
       
    }
    ch=false;
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for(int i=0;i<12;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            arr[i][j]=s[j];
        }
    }
 
    while(1){
        init();
        //풍선 터트림 유무 확인 후 터트리기
        for(int i=0;i<12;i++){
            for(int j=0;j<6;j++){
                if(vis[i][j]==0&&arr[i][j]!='.'){
                    check(i,j);
                }
            }
        }
        if(ch==false){
            break;
        }
        res++;
        
        //뿌요 이동하기
        for(int i=11;i>=0;i--){
            for(int j=0;j<6;j++){
                int x=i-1;
                while(arr[i][j]=='.'&&x>=0&&arr[x][j]=='.'){
                    x--;
                }
                if(x>=0){
                    swap(arr[i][j], arr[x][j]);
                }
               
            }
        }
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
