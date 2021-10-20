//
//  11866_1.cpp
//  algo
//
//  Created by 박효정 on 2021/10/20.
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
    
    int n,k;
    queue<int>q;
    queue<int>res;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=0;i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
      
        res.push(q.front());
        q.pop();
        
        
        
        
        
        
    }
    
    
    cout<<'<';
    while (!res.empty()) {
        if(res.size()!=1){
            cout<<res.front()<<", ";
            res.pop();
        }else{
            cout<<res.front()<<'>'<<"\n";
            res.pop();
        }
     
    }
    
    
    
    
    
    return 0;
}
