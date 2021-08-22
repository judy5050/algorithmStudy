//
//  2667.cpp
//  algo
//
//  Created by 박효정 on 2021/08/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    string s;
    vector<vector<int>>v(n,vector<int>(n));
    vector<vector<int>>vis(n,vector<int>(n));
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            v[i][j]=s[j]-'0';
            
            
        }
        
        
        
    }
    int cnt=0;
    int val=0;
    
    queue<pair<int,int>>q;
    vector<int>res;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]==0&&v[i][j]==1){
                q.push({i,j});
                vis[i][j]=1;
                int val=1;
                int tmp=0;
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    
                  
                    tmp=max(tmp,vis[x][y]);
                    q.pop();
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        if(nx>=0&&ny>=0&&nx<n&&ny<n){
                            if(vis[nx][ny]==0&&v[nx][ny]==1){
                                val+=1;
                                vis[nx][ny]=val;
                                q.push({nx,ny});
                            }
                        }
                    }
                }
                cnt++;
                res.push_back(tmp);
                
            }
        }
    }
    
    
    cout<<cnt<<"\n";
    sort(res.begin(), res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
    cout<<"\n";
    
    
    return 0;
}
