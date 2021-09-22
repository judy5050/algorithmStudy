//
//  15650.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n,m;
int vis[9];
void dfs(int num,string s){
    if(num>=n||s.size()>=m){
        if(s.size()==m){
            for(int j=0;j<s.size();j++){
                cout<<s[j]<<' ';
            }
            cout<<"\n";
        }
        return;
    }
    dfs(num+1,s+to_string(num+1));
    dfs(num+1,s);
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n>>m;
    
    dfs(0,"");
    
    
    
    
    
    return 0;
}

