//
//  14499.cpp
//  algo
//
//  Created by 박효정 on 2021/06/16.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[21][21];
int d[7];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    //세로 가로 좌표 명렬개수
    int n,m,x,y,k;
    cin>>n>>m>>x>>y>>k;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    vector<int>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];
    }
    

  
    int d1=d[1];
    int d2=d[2];
    int d3=d[3];
    int d4=d[4];
    int d5=d[5];
    int d6=d[6];
    int nx=0;
    int ny=0;
    for(int i=0;i<k;i++){
        
        nx=x;
        ny=y;
        d1=d[1];
        d2=d[2];
        d3=d[3];
        d4=d[4];
        d5=d[5];
        d6=d[6];
        //동쪽일때
        //주사위 굴리기
        if(v[i]==1){
            ny=y+1;
            if(ny<0||ny>=m||nx<0||nx>=n)continue;
                y=ny;
                d[3]=d1;
                d[6]=d3;
                d[4]=d6;
                d[1]=d4;
                
                
            }
        //서쪽
        else if(v[i]==2){
            
            ny=y-1;
            if(ny<0||ny>=m||nx<0||nx>=n)continue;
            y=ny;
            d[1]=d3;
            d[6]=d4;
            d[4]=d1;
            d[3]=d6;
            
            
        }
        
        //남쪽
        else if(v[i]==4){
            
            nx=x+1;
            if(ny<0||ny>=m||nx<0||nx>=n)continue;
            x=nx;
            d[6]=d5;
            d[5]=d1;
            d[1]=d2;
            d[2]=d6;
            
            
        }
        
        //북쪽
        else if(v[i]==3){
            
            nx=x-1;
            if(ny<0||ny>=m||nx<0||nx>=n)continue;
            x=nx;
            d[1]=d5;
            d[2]=d1;
            d[6]=d2;
            d[5]=d6;
            
            
        }
        if(arr[x][y]==0){
            arr[x][y]=d[6];
        }
        else{
            d[6]=arr[x][y];
            arr[x][y]=0;
        }
        
        cout<<d[1]<<"\n";
        
        
    }

    
    return 0;
}
