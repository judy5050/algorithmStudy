//
//  infrun_91_top-down.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <vector>

using namespace std;
int dy[101];
int dfs(int n){
    if(dy[n]>0){
        return dy[n];
    }
    if(n==1||n==2){
        return n;
    }
    else{
        return dy[n]=dfs(n-1)+dfs(n-2);
    }
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    cout<<dfs(n);
    
    
    
    
    
    return 0;
}
