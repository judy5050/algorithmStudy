//
//  18352.cpp
//  algo
//
//  Created by 박효정 on 2021/10/05.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>


using namespace std;

int n,m,k,x;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m>>k>>x;
    
    vector<int>ve[n+1];
   
    int arr[n+1];
    //init
 
    fill(arr, arr+n+1, 0);
    
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        ve[a].push_back(b);
    }
    
    queue<pair<int, int>>q;
    q.push({x,0});
    arr[x]=-1;
    while (!q.empty()) {
        int nx=q.front().first;
        int val=q.front().second;
        q.pop();
        for(int i=0;i<ve[nx].size();i++){
            if(arr[ve[nx][i]]==0){
                q.push({ve[nx][i],val+1});
                arr[ve[nx][i]]=val+1;
            }
        }
    }
    vector<int>res;
    for(int i=1;i<=n;i++){
        if(arr[i]==k){
            res.push_back(i);
        }
    }
    
    sort(res.begin(), res.end());
    
    if(res.empty()){
        res.push_back(-1);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
    
    
    return 0;
}
