//
//  algo_47.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int px[4]={-1,0,1,0};
int py[4]={0,-1,0,1};
int arr[51][51];
int res;
int check[51][51];
int n;
int cnt;
void dfs(int a,int b){
    int mx;
    int my;
    for(int i=0;i<4;i++){
        mx=a+px[i];
        my=b+py[i];
        if(mx>=0&&my>=0&&mx<=n+1&&my<=n+1){
            if(arr[a][b]>arr[mx][my]){
                cnt++;
            }
        }
    }
    
    if(cnt==4){
        res++;
    }
    cnt=0;
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
 
    cin>>n;
    
    //배열 값 입력
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            
            
            
        }
    }
   
    
    //봉우리 찾기
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dfs(j,i);
        }
    }
    
    
    
    cout<<res<<"\n";
    
    
    
    
    return 0;
}
