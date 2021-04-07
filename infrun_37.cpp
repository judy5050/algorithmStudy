//
//  infrun_37.cpp
//  algo
//
//  Created by 박효정 on 2021/04/07.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int C[20];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int s,n,a,i,j,pos;
    cin>>s>>n;
    
    for( i=1;i<=n;i++){
        cin>>a;
        pos=-1;
        for( j=0;j<s;j++) if(C[j]==a)pos=j;
        if(pos==-1){
            for(j=s-1;j>=1;j--)C[j]=C[j-1];
        }
        else{
            for(j=pos;j>=1;j--)C[j]=C[j-1];
        }
        C[j]=a;
    }
    for(i=0;i<s;i++)
        cout<<C[i]<<" ";
    
    cout<<"\n";
    
    
    
    
    
    return 0;
}
