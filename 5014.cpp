//
//  5014.cpp
//  algo
//
//  Created by 박효정 on 2021/07/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>


using namespace std;

int f,s,g,u,d;
vector<int>dir;
int res=987654321;
int vis[1000001];
void bfs(int s){
    queue<pair<int, int>>q;
    q.push({s,0});
    vis[s]=1;
    while(!q.empty()){
        int cur=q.front().first;
        int cnt=q.front().second;
        q.pop();
        if(cur==g){
            res=cnt;
            break;
        }
        if(dir[0]+cur<=f&&vis[dir[0]+cur]==0){
            q.push({dir[0]+cur,cnt+1});
            vis[dir[0]+cur]=1;
        }
        if(cur-dir[1]>=1&&vis[cur-dir[1]]==0){
            q.push({cur-dir[1],cnt+1});
            vis[cur-dir[1]]=1;
        }
        
       
        
        
        
        
    }
    
    
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
  
   
    cin>>f>>s>>g>>u>>d;
    //맨 앞이 up값
    dir.push_back(u);
    dir.push_back(d);

    bfs(s);
    
    
    if(res!=987654321){
        cout<<res<<"\n";
    }else {
        cout<<"use the stairs"<<"\n";
    }
    
    
    
    
    
    return 0;
}
