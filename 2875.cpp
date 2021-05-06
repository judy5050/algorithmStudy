//
//  2875.cpp
//  algo
//
//  Created by 박효정 on 2021/05/06.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m,k;
    
    int res=2147000000;
    cin>>n>>m>>k;
    int team1=n/2,team2=m;
    int  tmp1=n,tmp2=m;
    while(k>0){
     
        if(team1>team2){
            tmp1-=2;
            k-=2;
            team1=tmp1/2;
            
        }else{
            tmp2--;
            k-=1;
            team2=tmp2/1;
            
        }
      
        
        
        
        
    }
    
    res=min(res,min(team1,team2));
    cout<<res<<"\n";
    
    return 0;
}
