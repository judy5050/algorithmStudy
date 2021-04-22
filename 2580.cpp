//
//  2580.cpp
//  algo
//
//  Created by 박효정 on 2021/04/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int ch[10];
int map[10][10];
vector<pair<int, int>> v;
int row[10][10];
int col[10][10];
int square[10][10];

void dfs(int cnt){
    int x=cnt/9;
    int y=cnt%9;
    //출력
    if(cnt==81){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<map[i][j]<<" ";
            }
            cout<<"\n";
        }
        exit(0);
    }
     if(map[x][y]==0){
        for(int i=1;i<=9;i++){
            if(row[x][i]==0&&col[y][i]==0&&square[(x/3)*3+(y/3)][i]==0){
                row[x][i]=1;
                col[y][i]=1;
                square[(x/3)*3+(y/3)][i]=1;
                map[x][y]=i;
                dfs(cnt+1);
                map[x][y]=0;
                
                row[x][i]=0;
                col[y][i]=0;
                square[(x/3)*3+(y/3)][i]=0;
                
            }
        }
     }
     else
     {
         dfs(cnt+1);
     }
    
        
        
        
        
        
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    //입력
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>map[i][j];
            if(map[i][j]!=0){
                
                //행과 열 그리고 사각형 영역에 어떤 숫자가 들어가 있는지 확인
                
                row[i][map[i][j]]=1;
                col[j][map[i][j]]=1;
                square[(i/3)*3+j/3][map[i][j]]=1;
            }
        }
        
    }
    
    dfs(0);
    
    
    
    
    
    
    
    return 0;
}
