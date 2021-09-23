//
//  15664.cpp
//  algo
//
//  Created by 박효정 on 2021/09/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
vector<int>ve;
vector<int>lis;
vector<int>vis(8);

void dfs(int num){
    if(lis.size()==m||num>=n){
        if(lis.size()==m){
            for(int i=0;i<lis.size();i++){
                cout<<lis[i]<<' ';
            }
            cout<<"\n";
        }
       
        return;
    }
    int pre=-1;
    for(int i=num;i<n;i++){
        if(pre!=ve[i]&&vis[i]==0){
            pre=ve[i];
            lis.push_back(ve[i]);
            vis[i]=1;
            dfs(i+1);
            lis.pop_back();
            vis[i]=0;
            
            
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
    
    
    dfs(0);
    
    
    
    
    return 0;
}
