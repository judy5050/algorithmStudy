//
//  2800.cpp
//  algo
//
//  Created by 박효정 on 2021/07/31.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int vis[201];
int ch[201];
set<string>res;
string s;
vector<pair<int,int>>pa;
void dfs(int cnt,int idx){
    if(cnt>=1){
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(ch[i]==0){
                tmp+=s[i];
            }
           
        }
        res.insert(tmp);
    }
    
    for(int i=idx;i<pa.size();i++){
        if(vis[i]==1)continue;
        vis[i]=1;
        ch[pa[i].first]=1;
        ch[pa[i].second]=1;
        dfs(cnt+1,idx+1);
        vis[i]=0;
        ch[pa[i].first]=0;
        ch[pa[i].second]=0;
        
    }
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
   
    cin>>s;
    
    
    queue<char>tmp;
  
    stack<int>sc;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            sc.push(i);
        }else if(s[i]==')'){
            pa.push_back({sc.top(),i});
            sc.pop();
            
            
        }
        
        
    }
    dfs(0,0);
    
    for(auto i:res){
        cout<<i<<"\n";
    }
    
    
    return 0;
}
