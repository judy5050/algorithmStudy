//
//  infrun_51.cpp
//  algo
//
//  Created by 박효정 on 2021/04/11.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[701][701],dy[701][701];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int h,w,n,m,i,j,tmp,high=-2147000000;
    cin>>h>>w;
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            cin>>a[i][j];
            dy[i][j]=dy[i-1][j]+dy[i][j-1]+dy[i][j]-dy[i-1][j-1];
        }
    }
    cin>>n>>m;
    
    for(i=n;i<=h;i++){
        for(j=m;j<=w;j++){
            tmp=dy[i][j]-dy[i-n][j]+dy[i-n][j-m]-dy[i][j-m];
            if(tmp>high) high=tmp;
        }
    }
    
    cout<<high<<"\n";
    
    
    
    
    
    return 0;
}
