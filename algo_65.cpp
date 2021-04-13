//
//  algo_65.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[7][7];
int check[7][7];
int cnt;
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};

void dfs(int a,int b){
    check[a][b]=1;
    int mx;
    int my;
    if(a==6&&b==6){
        cnt++;
    }
    else{
        for(int i=0;i<4;i++){
            mx=a+dx[i];
            my=b+dy[i];
            if((mx>=0)&&(my>=0)&&(mx<7)&&(my<7)&&arr[mx][my]==0){
                if(check[mx][my]!=1){
                    dfs(mx,my);
                    check[mx][my]=0;
                }
            }
        }
        
        
    }
    
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            cin>>arr[i][j];
        }
    }
    
    
    
    //출발점
    dfs( 0, 0);
    
    
    
    cout<<cnt<<"\n";
    
    
    
    
    
    
    return 0;
}
