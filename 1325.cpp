//
//  1325.cpp
//  algo
//
//  Created by 박효정 on 2021/08/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n>>m;
    
    vector<int>v[n+1];
    vector<pair<int,int>>res;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        queue<int>q;
        q.push(i);
        int cnt=0;
        vector<int>vis(n+1);
        vis[i]=1;
        while(!q.empty()){
            
            int now=q.front();
            q.pop();
            cnt++;
            for(int i=0;i<v[now].size();i++){
                if(vis[v[now][i]]==0){
                    q.push(v[now][i]);
                  
                    vis[v[now][i]]=1;
                }
               
            }
        }
        res.push_back({cnt,i});
        
        
        
        
        
    }
    
    
  
    
    sort(res.begin(), res.end(), greater<>());
    
    vector<int>ve;
    
    for(int i=0;i<res.size();i++){
        if (i+1<res.size()&&res[i].first!=res[i+1].first) {
            ve.push_back(res[i].second);
            break;
        }else{
            ve.push_back(res[i].second);
        }
    }
    sort(ve.begin(),ve.end());
    
    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<' ';
    }
    cout<<"\n";
    
    
    return 0;
}
