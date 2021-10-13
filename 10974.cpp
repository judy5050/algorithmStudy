//
//  10974.cpp
//  algo
//
//  Created by 박효정 on 2021/10/13.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n;

int vis[9];

void dfs(string str){
    
    if(str.size()==n){
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<' ';
        }
        cout<<"\n";
    }else{
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                vis[i]=1;
                dfs(str+to_string(i));
                vis[i]=0;
            }
        }
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
  
    cin>>n;
    
    dfs("");
    
    
    
    
    
    return 0;
}
