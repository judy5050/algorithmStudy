//
//  infrun_47.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[60][60];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int main(){
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k,cnt=0,flag;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            flag=0;
            for(k=0;k<4;k++){
                
                //시간 단축 요소
                if(a[i][j]<=a[i+dx[k]][j+dy[k]])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cnt++;
            }
        }
    }
    
    cout<<cnt<<"\n";
    
    
    return 0;
}
