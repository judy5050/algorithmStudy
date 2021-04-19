//
//  infrun_93.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dy[50];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    
    cin>>n;
    
    dy[1]=1;
    dy[2]=2;
    for(int i=3;i<=n+1;i++){
        dy[i]=dy[i-2]+dy[i-1];
    }
    
    cout<<dy[n+1]<<"\n";
    
    return 0;
}
