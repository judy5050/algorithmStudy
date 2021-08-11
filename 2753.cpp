//
//  2753.cpp
//  algo
//
//  Created by 박효정 on 2021/08/11.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    if(n%4==0&&n%100!=0){
        cout<<1<<"\n";
    }else if(n%400==0){
        cout<<1<<"\n";
    }
    else {
        cout<<0<<"\n";
    }
    
    
    
    
    
    return 0;
}
