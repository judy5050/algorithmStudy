//
//  algo_73.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
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
    
    int a;
    priority_queue<int> pq;
    
    while(true){
        cin>>a;
        if(a==-1){
            break;
        }
        if(a==0){
            if(pq.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            
            
        }
        else{
            pq.push(a);
        }
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
