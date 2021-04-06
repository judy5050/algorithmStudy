//
//  infrun_35.cpp
//  algo
//
//  Created by 박효정 on 2021/04/06.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,tmp;


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
        for(int j=0;j<n-1-i;j++){
            if(v[j]>0&&v[j+1]<0){
                tmp=v[j];
                v[j]=v[j+1];
                v[j+1]=tmp;
                
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    
    
    
    
    
    return 0;
}
