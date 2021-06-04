//
//  3085.cpp
//  algo
//
//  Created by 박효정 on 2021/06/04.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

char arr[51][51];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int res=0;
int n;
int red;
int yellow;
int blue;
int green;
int cnt;
bool ch=false;
void check(){
    
   
    //열에서 가장 긴 사탕개수 확인
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=1;j<n;j++){
            if(arr[i][j]==arr[i][j-1]){
                cnt++;
                res=max(cnt,res);
            }else{
                cnt=0;
            }
        }
    }
    
    cnt=0;
    //향에서 가장 긴 사탕개수 확인
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=1;j<n;j++){
            if(arr[j][i]==arr[j-1][i]){
                cnt++;
                res=max(cnt,res);
            }else{
                cnt=0;
            }
        }
    }
    
    
}
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
  
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                //변경가능하면,
                if(nx>=0&&ny>=0&&nx<n&&ny<n){
                    swap(arr[i][j], arr[nx][ny]);
                    check();
                    swap(arr[i][j], arr[nx][ny]);
                }
            }
           
        }
    }
    
    cout<<res+1<<"\n";
    
    return 0;
}
