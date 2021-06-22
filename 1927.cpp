//
//  1927.cpp
//  algo
//
//  Created by 박효정 on 2021/06/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<>>pq;
    while(n--){
        
        int a;
        cin>>a;
        if(a==0){
            if(!pq.empty()){
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            else{
                cout<<0<<"\n";
            }
            
        }
        else{
            
            pq.push(a);
            
            
        }
        
        
        
        
        
        
    }
    
    
    
    
    
    return 0;
}
