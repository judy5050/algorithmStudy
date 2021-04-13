//
//  infrun_63.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int map[51][51];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,i,j,a,b,c;
    
    cin>>n>>m;
    
    for(i=1;i<=m;i++){
        cin>>a>>b>>c;
        map[a][b]=c;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    
    
    
    
    return 0;
}
