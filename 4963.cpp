//
//  4963.cpp
//  algo
//
//  Created by 박효정 on 2021/05/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
struct dir{
    
    int x,y;
    
};
int w,h;
int ch[51][51];
int arr[51][51];
dir d[8]={{1,-1},{-1,0},{-1,1},{0,-1},{-1,-1},{0,1},{1,0},{1,1}};
vector<int> res;
int cmp1=1;

void dfs(int x,int y){
    int nx,ny;
    ch[x][y]=cmp1;
    for(int i=0;i<8;i++){
        nx=x+d[i].x;
        ny=y+d[i].y;
        if(nx>=0&&ny>=0&&nx<h&&ny<w){
            if(ch[nx][ny]==0&&arr[nx][ny]==1){
                ch[nx][ny]=cmp1;
                dfs(nx,ny);
            }
        }
        
    }
    
    
    
    
}

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while(1){
        cin>>w>>h;
        if(w==0&&h==0)
            break;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(ch[i][j]==0&&arr[i][j]==1){
                    dfs(i,j);
                    cmp1++;
                }
            }
        }
        
       
        
        res.push_back(cmp1-1);
        cmp1=1;
        memset(ch, 0, sizeof(ch));
        memset(arr, 0, sizeof(arr));
        
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
    
    
    return 0;
}

