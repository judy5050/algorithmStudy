//
//  infrun_76.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int dy[21][21];
int dfs(int n,int r){
    if(dy[n][r]>0) return dy[n][r];
    if(n==r||r==0) return 1;
    else{
        return dy[n][r]=dfs(n-1,r-1)+dfs(n-1,r);
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,r;
    cin>>n>>r;
    
    cout<<dfs(n,r)<<"\n";
    

    
    
    
    
    
    return 0;
}
