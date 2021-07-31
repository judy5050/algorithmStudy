//
//  11279.cpp
//  algo
//
//  Created by 박효정 on 2021/07/31.
//

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    int input;
    priority_queue<int>pq;
    while(n--){
        cin>>input;
        if(input!=0){
            pq.push(input);
        }else{
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
