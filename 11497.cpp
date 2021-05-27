//
//  11497.cpp
//  algo
//
//  Created by 박효정 on 2021/05/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int cnt;
    cin>>cnt;
    
    while(cnt--){
        int n;
        int a;
        int index;
        int res=-2147000000;
        cin>>n;
        vector<int>v(n);
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            cin>>a;
            pq.push(a);
        }
        index=(n/2);
        v[index]=pq.top();
        pq.pop();
        for(int i=1;i<=n/2;i++){
            if(index-i>=0){
                v[index-i]=pq.top();
                pq.pop();
            }
            if(index+i<n){
                v[index+i]=pq.top();
                pq.pop();
            }
        }
        
        res=max(abs(v[0]-v[n-1]),res);
        for(int i=0;i<n-1;i++){
            res=max(abs(v[i]-v[i+1]),res);
        }
        cout<<res<<"\n";
        
        
    }
    
    
    
    
    
    
    return 0;
}
