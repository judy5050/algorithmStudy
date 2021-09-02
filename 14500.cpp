//
//  14500.cpp
//  algo
//
//  Created by 박효정 on 2021/09/02.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[501][501];
int vis[501][501];
int res=0;
int n,m;
int dx[]={0,1,-1,0};
int dy[]={-1,0,0,1};

vector<pair<int, int>>v1{{0,0},{1,0},{2,0},{1,1}};
vector<pair<int, int>>v2{{0,0},{1,0},{2,0},{1,-1}};
vector<pair<int, int>>v3{{0,0},{1,0},{1,-1},{1,1}};
vector<pair<int, int>>v4{{0,0},{-1,0},{-1,-1},{-1,1}};

void dfs(int def,int x,int y,int sum){
    
    if(def>=4){
        res=max(res,sum);
        return ;
    }
    else{
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m){
                if(vis[nx][ny]==0){
                    vis[nx][ny]=1;
                    dfs(def+1,nx,ny,sum+arr[nx][ny]);
                    vis[nx][ny]=0;
                }
                
            }
        }
        
        
    }
    
    
    
    
}



int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
   
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=1;
            dfs(1,i,j,arr[i][j]);
            vis[i][j]=0;
        }
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i+v1[0].first>=0&&j+v1[0].second>=0&&i+v1[0].first<n&&j+v1[0].second<m&&
              i+v1[1].first>=0&&j+v1[1].second>=0&&i+v1[1].first<n&&j+v1[1].second<m&&
              i+v1[2].first>=0&&j+v1[2].second>=0&&i+v1[2].first<n&&j+v1[2].second<m&&
              i+v1[3].first>=0&&j+v1[3].second>=0&&i+v1[3].first<n&&j+v1[3].second<m){
              
               sum=arr[i+v1[0].first][j+v1[0].second]+arr[i+v1[1].first][j+v1[1].second]+arr[i+v1[2].first][j+v1[2].second]+arr[i+v1[3].first][j+v1[3].second];
               res=max(res,sum);
               sum=0;
           }
            
            if(i+v2[0].first>=0&&j+v2[0].second>=0&&i+v2[0].first<n&&j+v2[0].second<m&&
               i+v2[1].first>=0&&j+v2[1].second>=0&&i+v2[1].first<n&&j+v2[1].second<m&&
               i+v2[2].first>=0&&j+v2[2].second>=0&&i+v2[2].first<n&&j+v2[2].second<m&&
               i+v2[3].first>=0&&j+v2[3].second>=0&&i+v2[3].first<n&&j+v2[3].second<m){
               
                sum=arr[i+v2[0].first][j+v2[0].second]+arr[i+v2[1].first][j+v2[1].second]+arr[i+v2[2].first][j+v2[2].second]+arr[i+v2[3].first][j+v2[3].second];
                res=max(res,sum);
                sum=0;
            }
            if(i+v3[0].first>=0&&j+v3[0].second>=0&&i+v3[0].first<n&&j+v3[0].second<m&&
               i+v3[1].first>=0&&j+v3[1].second>=0&&i+v3[1].first<n&&j+v3[1].second<m&&
               i+v3[2].first>=0&&j+v3[2].second>=0&&i+v3[2].first<n&&j+v3[2].second<m&&
               i+v3[3].first>=0&&j+v3[3].second>=0&&i+v3[3].first<n&&j+v3[3].second<m){
               
                sum=arr[i+v3[0].first][j+v3[0].second]+arr[i+v3[1].first][j+v3[1].second]+arr[i+v3[2].first][j+v3[2].second]+arr[i+v3[3].first][j+v3[3].second];
                res=max(res,sum);
                sum=0;
            }
            if(i+v4[0].first>=0&&j+v4[0].second>=0&&i+v4[0].first<n&&j+v4[0].second<m&&
               i+v4[1].first>=0&&j+v4[1].second>=0&&i+v4[1].first<n&&j+v4[1].second<m&&
               i+v4[2].first>=0&&j+v4[2].second>=0&&i+v4[2].first<n&&j+v4[2].second<m&&
               i+v4[3].first>=0&&j+v4[3].second>=0&&i+v4[3].first<n&&j+v4[3].second<m){
               
                sum=arr[i+v4[0].first][j+v4[0].second]+arr[i+v4[1].first][j+v4[1].second]+arr[i+v4[2].first][j+v4[2].second]+arr[i+v4[3].first][j+v4[3].second];
                res=max(res,sum);
                sum=0;
            }
        }
    }
    
    
    
    
    
    
    cout<<res<<"\n";
    
    return 0;
}
