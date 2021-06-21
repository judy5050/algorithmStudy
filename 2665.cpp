//
//  2665.cpp
//  algo
//
//  Created by 박효정 on 2021/06/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define  INF 987654321
using namespace std;

int dis[51][51];
int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};
int v[51][51];
int res;
int n;
struct qu{
    int val;
    int x;
    int y;
    
    qu(int a,int b,int c){
        val=a;
        x=b;
        y=c;
    }
    bool operator <(const qu & b) const{
        
        return val>b.val;
        
    }
    
    
};


void bfs(int a,int b){
    
    priority_queue<qu>pq;
    pq.push(qu(0,a,b));
    
    while(!pq.empty()){
        
      
        
        int x=pq.top().x;
        int y=pq.top().y;
        int val=pq.top().val;
        pq.pop();
        
        
        if(x==n&&y==n){
            res=val;
        }
        
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            int cnt=val;
            if(xx>0&&xx<=n&&yy>0&&yy<=n){
                if(dis[xx][yy]==0){
                    if(v[xx][yy]==0){
                        cnt+=1;
                    }
                    pq.push(qu(cnt,xx,yy));
                    dis[xx][yy]=1;
                }
            }
        }
        
        
        
        
    }
    
    
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    cin>>n;
    
   
    
    string s;
    for(int i=1;i<=n;i++){
        fill(dis[i], dis[i]+51, 0);
        cin>>s;
        for(int j=0;j<s.size();j++){
            v[i][j+1]=s[j]-'0';
        }
    }
    dis[1][1]=1;
    
    bfs(1,1);
   
    
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
