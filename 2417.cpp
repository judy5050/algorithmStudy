//
//  2417.cpp
//  algo
//
//  Created by 박효정 on 2021/09/06.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    long long int n;
    cin>>n;
    
    long long int res=sqrt(n);
    if(res*res==n){
        cout<<res<<"\n";
    }else{
        cout<<res+1<<"\n";
    }
   
    
    
    
    
    
    return 0;
}
