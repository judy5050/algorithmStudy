//
//  동빈나_구현_2.cpp
//  algo
//
//  Created by 박효정 on 2021/05/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int h,cnt;
bool check(int h,int m,int s){
    if(h%10==3||m/10==3||m%10==3||s/10==3||s%10==3){
        return true;
    }
    return false;
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>h;
    for(int i=0;i<=h;i++){
        for(int j=0;j<60;j++){
            for(int k=0;k<60;k++){
                if(check(i,j,k)) cnt++;
            }
        }
    }
    
    cout<<cnt<<"\n";
    
    
    
    return 0;
}
