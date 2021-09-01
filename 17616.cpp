//
//  hu_3.cpp
//  algo
//
//  Created by 박효정 on 2021/08/30.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;



vector<int>v[2][100001];
int vis[2][100001];
int main(){


    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,x;
    cin>>n>>m>>x;
    
    int max_num=0;
    int min_num=0;
    
    
    //입력
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        //확실히 승리한 경우
        v[0][a].push_back(b);
        //확실히 진 경우
        v[1][b].push_back(a);
    }
    
    
    queue<int>q;
    q.push(x);
    
    int cnt=0;
    //확실히 승리한 경우
    while(!q.empty()){
        int now=q.front();
        q.pop();
        vis[0][now]=1;
        for(int i=0;i<v[0][now].size();i++){
            if(vis[0][v[0][now][i]]==0){
                q.push(v[0][now][i]);
                vis[0][v[0][now][i]]=1;
                cnt++;
            }
        }
        
        
        
        
    }
    max_num=n-cnt;
    cnt=0;
    
    
    q.push(x);
    //확실히 진 경우
    while(!q.empty()){
        int now=q.front();
        q.pop();
        vis[1][now]=1;
        for(int i=0;i<v[1][now].size();i++){
            if(vis[1][v[1][now][i]]==0){
                q.push(v[1][now][i]);
                vis[1][v[1][now][i]]=1;
                cnt++;
            }
        }
        
        
        
        
    }
    
    min_num=cnt+1;
    
    cout<<min_num<<' '<<max_num<<"\n";


    return 0;
}
