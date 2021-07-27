//
//  6591.cpp
//  algo
//
//  Created by 박효정 on 2021/07/28.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int a,b;
    while (1) {
        cin>>a>>b;
        if(a==0&&b==0){
            break;
        }
        long long result=1;
        b=min(b,a-b);
        for(int i=1;i<=b;i++){
            result*=a;
            result/=i;
            a--;
        }
        cout<<result<<"\n";
        
        
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
