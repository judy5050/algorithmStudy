//
//  algo_97.cpp
//  algo
//
//  Created by 박효정 on 2021/04/20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int arr[30][30];
int map[30][30];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            map[i][j]=2147000000;
        }
    }
    
    //첫 시작점 넣기
    map[1][1]=arr[1][1];
    
    for(int i=1;i<=n;i++){
        map[1][i]=arr[1][i]+map[1][i-1];
        map[i][1]=arr[i][1]+map[i-1][1];
    }
    
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            map[i][j]=min(arr[i][j]+map[i-1][j],arr[i][j]+map[i][j-1]);
           
        }
    }
   
    
    cout<<map[n][n]<<"\n";
    
    
    
    return 0;
}
