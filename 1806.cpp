//
//  1806.cpp
//  algo
//
//  Created by 박효정 on 2021/09/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,s;
    cin>>n>>s;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    
    int lt=0;
    int rt=0;
    int sum=0;
    int cnt=0;
    int res=987654321;
    while(lt<=n){
    
        if(sum<=s){
          
            sum+=v[lt++];
            cnt++;
        }else{
            sum-=v[rt++];
            cnt--;
        }
        
        if(sum>=s){
            res=min(res,cnt);
        }
        
        
        
    }
    
    
    
    if(res!=987654321){
        cout<<res<<"\n";
    }else{
        cout<<0<<"\n";
    }
 
    
    return 0;
}
