//
//  infrun_48.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[10][10];


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int i,j,sum,ave,min,tmp,res=0;
    for( i=1;i<=9;i++){
        sum=0;
        for(j=1;j<=9;j++){
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    
    ave=(sum/9.0)+0.5;
    cout<<ave<<" ";
    min=2147000000;
    for(j=1;j<=9;j++){
        tmp=abs(a[i][j]-ave);
        if(tmp<min){
            min=tmp;
            res=a[i][j];
        }
        else if(tmp==min){
            if(a[i][j]>res) res=a[i][j];
        }
        
    }
    
        cout<<res<<"\n";
    }

    
    
    return 0;
}
