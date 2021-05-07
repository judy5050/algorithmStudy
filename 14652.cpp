//
//  14652.cpp
//  algo
//
//  Created by 박효정 on 2021/05/08.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,k;
    cin>>n>>m>>k;
    
    int x,y;
    x=k/m;
    y=k%m;
    cout<<x<<' '<<y<<"\n";
    
    
    return 0;
}
