//
//  infrun_102.cpp
//  algo
//
//  Created by 박효정 on 2021/04/21.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,a,b,c;
    
    cin>>n>>m;
    
    vector<vector<int>> dis(n+1,vector<int>(n+1,5000));
    
    
    for(int i=1;i<=n;i++) dis[i][i]=0;
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        dis[a][b]=c;
    }
    
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dis[i][j]>dis[i][k]+dis[k][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dis[i][j]==5000){
                cout<<"M ";
            }
            else cout<<dis[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    
    return 0;
}
