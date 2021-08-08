//
//  21921.cpp
//  algo
//
//  Created by 박효정 on 2021/08/08.
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
    
    
    int x,n;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    ll cnt=1;
    ll res=0;
    
    int lp=0;
    int rp=0;
    ll tmp=0;
    while (lp<n) {
        if(lp-rp<=x-1){
            tmp+=v[lp++];
        }
       
        else{
            tmp-=v[rp++];
        }
        if(lp-rp==x){
           if(res==tmp){
               cnt++;
           }else if(res<tmp){
               cnt=1;
               res=tmp;
           }
           tmp+=v[lp++];
       }
       
    }
    
    while(lp-rp>x){
        tmp-=v[rp];
        rp++;
      
    }
    
    if(lp-rp==x){
        if(res==tmp){
            cnt++;
        }else if(res<tmp){
            cnt=1;
            res=tmp;
        }
        tmp+=v[lp++];
    }
    
    
    
    if(res!=0){
        cout<<res<<"\n";
        cout<<cnt<<"\n";
    }else{
        cout<<"SAD"<<"\n";
    }
   

    
    return 0;
}
