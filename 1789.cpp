//
//  1789.cpp
//  algo
//
//  Created by 박효정 on 2021/09/06.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    long long s;
    
    cin>>s;
    long long sum=0;
    long long res=0;
    for(int i=1;i<=s;i++){
        if(sum+i<=s){
            res++;
            sum+=i;
        }else{
            cout<<res<<"\n";
            return 0;
        }
    }
    
    
    
    
    
    
    
    
    return 0;
}
