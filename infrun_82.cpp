//
//  algo_82.cpp
//  algo
//
//  Created by 박효정 on 2021/04/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int ch[20],arr[20],res[20];
int n,r;
int cnt;
void dfs(int l){
    
    if(l==r){
        for(int i=0;i<r;i++){
            cout<<res[i]<<" ";
            
        }
        cnt++;
        cout<<"\n";
    }
    else{
        for(int i=1;i<=n;i++){
            if(ch[i]==0){
                ch[i]=1;
                res[l]=arr[i];
                dfs(l+1);
                ch[i]=0;
            }
            
            
            
        }
        
        
        
        
        
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin>>n>>r;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    dfs(0);
    cout<<cnt<<"\n";
    
    
    return 0;
}

