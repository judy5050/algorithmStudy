//
//  algo_93.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dy[50];
int n;

int dfs(int v){
    if(dy[v]>0) return dy[v];
    if(v==1||v==2) return v;
    else{
        return dy[v]=dfs(v-1)+dfs(v-2);
        
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    
    cout<<dfs(n)<<"\n";
    
    
    
    
    
    
    return 0;
}
