//
//  algo_33.cpp
//  algo
//
//  Created by 박효정 on 2021/04/06.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,tmp,idx,cnt,arr[101];

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        
    }
    for(int i=0;i<n;i++){
        idx=i;
        for(int j=i+1;j<n;j++){
            if(v[idx]<v[j]){
                
                idx=j;
            }
        
        }
        tmp=v[i];
        v[i]=v[idx];
        v[idx]=tmp;
        
    }
    for(int i=0;i<n;i++){
        if(v[i]!=v[i+1]){
            cnt++;
        }
        if(cnt==3){
            cout<<v[i]<<"\n";
            break;
        }
        
    }
    
    
    
    
    
    
    
    return 0;
}
