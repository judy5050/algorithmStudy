//
//  10971.cpp
//  algo
//
//  Created by 박효정 on 2021/09/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int arr[11][11];
int res=987654321;
int vis[11];
void dfs(int cost,int start,int cnt,int s){
    
    if(cnt>=n-1){
        if(cnt==n-1&&arr[start][s]!=0){
            cost+=arr[start][s];
            res=min(res,cost);
        }
        return;
    }
    
    for(int i=0;i<n;i++){
        if(arr[start][i]!=0&&vis[i]==0){
            vis[i]=1;
            dfs(cost+arr[start][i],i,cnt+1,s);
            vis[i]=0;
        }
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0l;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        vis[i]=1;
        dfs(0,i,0,i);
        vis[i]=0;
    }
   
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
