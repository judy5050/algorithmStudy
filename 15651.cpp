//
//  15651.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;

void dfs(string s){
    if(s.size()==m){
        if(s.size()==m){
            for(int j=0;j<s.size();j++){
                cout<<s[j]<<' ';
            }
            cout<<"\n";
        }
        return ;
    }
    
    for(int i=1;i<=n;i++){
        dfs(s+to_string(i));
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    dfs("");
    
    
    
    
    
    return 0;
}
