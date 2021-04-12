//
//  algo_59.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n,ch[11];

void dfs(int l){
    int i;
    if(l==n+1){
        for(i=1;i<=n;i++){
            if(ch[i]==1){
                cout<<i<<" ";
            }
           
        }
        cout<<"\n";
    }
    else{
        ch[l]=1;
        dfs(l+1);
        
        ch[l]=0;
        dfs(l+1);
        
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    dfs(1);
    
    
    
    
    
    
    return 0;
}

