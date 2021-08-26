//
//  2422.cpp
//  algo
//
//  Created by 박효정 on 2021/08/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[201][201];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n>>m;
    int res=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i][j]==1){
                continue;
            }
            for(int k=j+1;k<=n;k++){
                if(arr[i][k]==1||arr[j][k]==1){
                    continue;
                }
                res++;
            }
        }
    }
    
    
    
    cout<<res<<"\n";
    
    
    return 0;
}
