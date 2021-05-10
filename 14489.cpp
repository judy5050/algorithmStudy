//
//  14489.cpp
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
    
    long long int a,b,c;
   
  
    cin>>a>>b>>c;
    
    //치킨 두 마리를 살수있을 경우
    if(a+b>=c*2){
        cout<<(a+b)-c*2<<"\n";
    }
    else{
        cout<<a+b<<"\n";
    }
    
    
    return 0;
}
