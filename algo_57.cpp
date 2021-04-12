//
//  algo_57.cpp
//  algo
//
//  Created by 박효정 on 2021/04/12.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void two(int x){
    
    if(x==0){
       
        return;
    }
        
    
    else{
        
       
      
        two(x/2);
        cout<<x%2;
       
        
    }
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    two(n);
    
    
    
    
    
    return 0;
}
