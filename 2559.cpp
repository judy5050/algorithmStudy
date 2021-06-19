//
//  2559.cpp
//  algo
//
//  Created by 박효정 on 2021/06/19.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int index=0;
    int res=-2147000000;
    int cnt=0;
    int lt=0;
    int rt=0;
    while(1){
        
      
        if((rt-lt)>k) {
            cnt-=v[lt++];
        }
        else if(rt==v.size()){
            if((rt-lt)==k){
                res=max(cnt,res);
            }
                break;
        }
        else if((rt-lt)<=k){
            if((rt-lt)==k){
                res=max(cnt,res);
            }
            cnt+=v[rt++];
           
        }
       
        
       
        
        
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
