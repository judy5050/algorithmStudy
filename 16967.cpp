//
//  16967.cpp
//  algo
//
//  Created by 박효정 on 2021/10/21.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[301][301];
int brr[301][301];
int h,w,x,y;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>h>>w>>x>>y;
    
    //b베열 입력받기
    for(int i=0;i<h+x;i++){
        for(int j=0;j<w+y;j++){
            cin>>brr[i][j];
        }
    }
    
    //arr배열 만들기
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int vx=i-x;
            int vy=j-y;
            if(vx>=0&&vx<h&&vy>=0&&vy<w){
                arr[i][j]=brr[i][j]-arr[vx][vy];
            }else {
                arr[i][j]=brr[i][j];
            }
        }
    }
    
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<"\n";
    }
    
    
    
    
    
    return 0;
}
