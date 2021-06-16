//
//  4485.cpp
//  algo
//
//  Created by 박효정 on 2021/06/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int arr[126][126];
int vis[126][126];
int dx[]={0,1,-1,0};
int dy[]={-1,0,0,1};
int n;
int res=987654321;
struct qu{
    
    
    int x;
    int y;
    int val;
    
    qu(int a,int b,int c){
        x=a;
        y=b;
        val=c;
        
        
    }
    
    bool operator <(const qu & b) const{
        return val>b.val;
        
        
    }
    
    
};



void bfs(int a,int b,int c)
{
    priority_queue<qu>pq;
    pq.push(qu(a,b,c));
    while(!pq.empty()){
        int x=pq.top().x;
        int y=pq.top().y;
        int val=pq.top().val;
        pq.pop();
        if(x==n-1&&y==n-1){
            res=val;
        }
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<n){
                if(vis[nx][ny]==0){
                    pq.push(qu(nx,ny,val+arr[nx][ny]));
                    vis[nx][ny]=1;
                }
            }
            
            
        }
        
        
        
        
        
        
    }
    
    
    
    
    
}

void init(){
    
    for(int i=0;i<126;i++){
        fill(arr[i], arr[i]+126, 0);
        fill(vis[i], vis[i]+126, 0);
        res=987654321;
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int cnt=0;
    while(1){
       
        cin>>n;
        if(n==0){
            break;
        }
        cnt++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vis[0][0]=1;
        bfs(0,0,arr[0][0]);
        cout<<"Problem"<<' '<<cnt<<": "<<res<<"\n";
        init();
        
        
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
