//
//  15988.cpp
//  algo
//
//  Created by 박효정 on 2021/06/09.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    vector<long long>d(1000001);
    
    int n;
    cin>>n;
    
    d[1]=1;
    d[2]=2;
    d[3]=4;
    for(int i=4;i<=1000001;i++){
        d[i]=(d[i-1]+d[i-2]+d[i-3])%1000000009;
    }
    while(n--){
        int a;
        cin>>a;
        cout<<d[a]%1000000009<<"\n";
    
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
