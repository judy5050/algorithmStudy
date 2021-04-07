//
//  algo_38.cpp
//  algo
//
//  Created by 박효정 on 2021/04/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n;
    vector<int> v(n);
    vector<int> res(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(v[i]<v[j]){
                res[v[i]]++;
            }
            
            
        }
    }
    
    for(int i=1;i<=n;i++){
        cout<<res[i]<<" ";
        
    }
    
    cout<<"\n";
    
    
    
    return 0;
}

