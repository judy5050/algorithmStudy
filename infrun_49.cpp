//
//  infrun_49.cpp
//  algo
//
//  Created by 박효정 on 2021/04/10.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[11][11],b[11];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,i,j,sum=0;
    cin>>n;
    for( i=1;i<=n;i++)
        cin>>b[i];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a[j][i]=b[i];
        }
    }
    
    for(i=n;i>=1;i--){
        cin>>b[i];
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            if(a[i][j]>b[i]){
                a[i][j]=b[i];

            }
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            sum=sum+a[i][j];
        }
    }
    cout<<sum<<"\n";
    
    
    
    return 0;
}
