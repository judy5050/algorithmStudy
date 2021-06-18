//
//  2003.cpp
//  algo
//
//  Created by 박효정 on 2021/06/19.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n>>m;
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int res=0;
    int lt=0;
    int rt=0;
    int cnt=0;

    while(1){
        
        
        if(cnt>=m){
            cnt-=v[lt++];
        }
        else if(rt==v.size()){
           break;
        }
        else{
            cnt+=v[rt++];
        }
        if(cnt==m) res++;
        
        
        
        
        
        
        
    }
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
