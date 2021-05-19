//
//  1085.cpp
//  algo
//
//  Created by 박효정 on 2021/05/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int a=0,b=0,c=0,d=0;
    int res=2147000000;
    a=w-x;
    b=h-y;
    c=x;
    d=y;
    res=min(a,res);
    res=min(b,res);
    res=min(c,res);
    res=min(d,res);
    
    cout<<res<<"\n";
    return 0;
}

