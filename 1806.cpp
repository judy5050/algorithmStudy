//
//  1806.cpp
//  algo
//
//  Created by 박효정 on 2021/08/11.
//

#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;



int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    ll n,s;
    cin>>n>>s;
    
    vector<ll>v(n+1);
    vector<ll>cmp(n+1);
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
        cmp[i]=sum;
    }
    
    
    ll lt=0;
    ll rt=0;
    ll cnt=0;
    ll res=100001;
    while(lt<=n){
        cnt=cmp[lt]-cmp[rt];
        if(cnt>=s){
            res=min(res,(lt-rt));
        }
        if(cnt<=s){
            lt++;
        }else{
            rt++;
           
        }
      
        
    }
    
   
  

   
    
    if(res==100001){
        cout<<0<<"\n";
    }else{
        cout<<res<<"\n";
    }
 
    
    
    
    
    return 0;
}
