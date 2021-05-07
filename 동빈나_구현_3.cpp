//
//  동빈나_구현_3.cpp
//  algo
//
//  Created by 박효정 on 2021/05/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[9][9];
int ch[9][9];
int dx[8]={1,1,-1,-1,-2,-2,2,2};
int dy[8]={-2,3,-2,2,1,-1,1,-1};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    string s;
    cin>>s;
    
    int res=0;
    int x,y;
    x=(s[0]-'a')+1;
    y=s[1]-'0';
    int nx;
    int ny;
    for(int i=0;i<8;i++){
        nx=x+dx[i];
        ny=y+dy[i];
        if(nx>0&&ny>0&&nx<9&&ny<9){
            if(ch[nx][ny]==0){
                ch[nx][ny]=1;
                res++;
            }
        }
    }
    
    cout<<res<<"\n";
    
    return 0;
}
