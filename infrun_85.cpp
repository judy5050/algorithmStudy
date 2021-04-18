//
//  infrun_86.cpp
//  algo
//
//  Created by 박효정 on 2021/04/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a[20],op[5],n,maxi=-2147000000,mini=2147000000;

void dfs(int l,int res){
    if(l==n){
        if(maxi<res){
            maxi=res;
        }
        if(mini>res){
            mini=res;
        }
    }
    else{
        if(op[0]>0){
            op[0]--;
            dfs(l+1,res+a[l]);
            op[0]++;
        }
        if(op[1]>0){
            op[1]--;
            dfs(l+1,res-a[l]);
            op[1]++;
        }
        if(op[2]>0){
            op[2]--;
            dfs(l+1,res*a[l]);
            op[2]++;
        }
        if(op[3]>0){
            op[3]--;
            dfs(l+1,res/a[l]);
            op[3]++;
        }
    }
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int i;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<4;i++){
        cin>>op[i];
    }
    dfs(1,a[0]);
    cout<<maxi<<"\n"<<mini<<"\n";
    
    
    return 0;
}
