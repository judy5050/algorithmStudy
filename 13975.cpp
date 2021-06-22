//
//  13975.cpp
//  algo
//
//  Created by 박효정 on 2021/06/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int k;
    cin>>k;
    
    while(k--){
        long long res=0;
        int num;
        cin>>num;
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<num;i++){
            int a;
            cin>>a;
            pq.push(a);
        }
        while(!pq.empty()){
            if(pq.size()>=2){
                long long n1=pq.top();
                pq.pop();
                long long n2=pq.top();
                pq.pop();
                long long s=n1+n2;
                res+=s;
                pq.push(s);
            }else{
                pq.pop();
                
            }
            
            
            
        }
        
        cout<<res<<"\n";
        
    }
    
    
    
    
    
    
    
    return 0;
}
