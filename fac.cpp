//
//  fac.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int res=1;

void dfs(int n){
    
    
    if(n==1){
        return ;
    }
    else{
        res*=n;
        dfs(n-1);
    }
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    dfs(n);
    
    cout<<res<<"\n";
    
    
    
    
    
    return 0;
}
