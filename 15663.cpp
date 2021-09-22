//
//  15663.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
int vis[9];
vector<int>ve;
vector<string>s;
vector<string>lis;



void dfs(){
    
    if(s.size()==m){
      
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<' ';
        }
        cout<<"\n";
        return;
    }
    
    int pre=-1;
    for(int j=0;j<n;j++){
        if(vis[j]==0&&pre!=ve[j]){
            vis[j]=1;
            pre=ve[j];
            s.push_back(to_string(ve[j]));
            dfs();
            s.pop_back();
            vis[j]=0;
        }
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        ve.push_back(input);
    }
    
    sort(ve.begin(), ve.end());
    dfs();
    
    

    
    
    
    
    return 0;
}
