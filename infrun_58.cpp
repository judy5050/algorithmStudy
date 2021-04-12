//
//  algo_58.cpp
//  algo
//
//  Created by 박효정 on 2021/04/12.
//

#include <iostream>

using namespace std;


void D(int v){
    if(v>7) return ;
    
    else{
        D(v*2);
        D(v*2+1);
        cout<<v<<" ";
    }
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    D(1);
    cout<<"\n";
    
    
    
    return 0;
}
