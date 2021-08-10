//
//  20922.cpp
//  algo
//
//  Created by 박효정 on 2021/08/09.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100000

using namespace std;

int arr[MAX];


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
    int lt=0;
    int rt=0;
    int res=0;
    int len=0;
    while (lt<n) {
        if(arr[v[lt]]+1<=k){
            len++;
            res=max(len,res);
            arr[v[lt++]]++;
            
            
        }else {
            len--;
            arr[v[rt]]--;
            rt++;
        }
    
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    
    
    
    
    
    return 0;
}
