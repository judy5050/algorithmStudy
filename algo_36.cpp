//
//  algo_36.cpp
//  algo
//
//  Created by 박효정 on 2021/04/06.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,tmp,j;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        tmp=v[i];
        for(j=i-1;j>=0;j--){
            if(tmp<v[j]){
                v[j+1]=v[j];
                
            }
            else break;
            
            
        }
        v[j+1]=tmp;
        
        
        
        
    }
    
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    cout<<"\n";
    
    
    
    
    return 0;
}
