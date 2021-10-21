//
//  18428.cpp
//  algo
//
//  Created by 박효정 on 2021/10/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
char arr[6][6];
vector<pair<int, int>>t;
vector<pair<int,int>>x;
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
int vis[6][6];
int n;
bool ch=true;
bool c=false;
void init(){
    for(int i=0;i<6;i++){
        fill(vis[i], vis[i]+6, 0);
    }
}
void check(){
    
    ch=true;
    for(int i=0;i<t.size();i++){
        init();
        queue<pair<int, int>>q;
        q.push({t[i].first,t[i].second});
        while(!q.empty()&&ch==true){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int j=0;j<4;j++){
                int nx=x+dx[j];
                int ny=y+dy[j];
                while(nx>=0&&nx<n&&ny>=0&&ny<n){
                    if(vis[nx][ny]==0&&arr[nx][ny]=='X'){
                        vis[nx][ny]=1;
//                        q.push({nx,ny});
                    }
                    else if(vis[nx][ny]==0&&arr[nx][ny]=='S'){
//                        cout<<nx<<' '<<ny<<"\n";
                        ch=false;
                        break;
                    }
                    else if(vis[nx][ny]==0&&arr[nx][ny]=='O'){
//                        cout<<"break"<<"\n";
                        break;
                    }
                    nx+=dx[j];
                    ny+=dy[j];
                }
            }
           
            
        }
        
        
        
    }
    
    
    
}

void dfs(int index,int cnt){
    if(cnt==3){
        //선생님이 학생을 발견할수 있는지 유무 확인
        check();
        if(ch==true){
            c=true;
        }
        return;
    }if(index>=x.size()){
        
        return;
        
    }else{
//        for(int i=index;i<x.size();i++){
            arr[x[index].first][x[index].second]='O';
            dfs(index+1,cnt+1);
            arr[x[index].first][x[index].second]='X';
            dfs(index+1,cnt);
            
//        }
        
        
        
    }
    
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    

    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='X'){
                x.push_back({i,j});
            }
            if(arr[i][j]=='T'){
                t.push_back({i,j});
            }
        }
    }
  
    dfs(0,0);
    if(c==true){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
    
    
    
    
    
    return 0;
}
