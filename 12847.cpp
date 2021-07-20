//
//  12847.cpp
//  algo
//
//  Created by 박효정 on 2021/07/20.
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
    long long tmp=0;
    cin>>n>>m;
    vector<long long>sum(n);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        tmp+=v[i];
        sum[i]=tmp;
        
    }
    long long res=0;

    for(int i=0;i<n;i++){
        if(i-m>=0){
            res=max(res,sum[i]-sum[i-m]);
        }else{
            res=max(res,sum[i]);
        }
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    return 0;
}
