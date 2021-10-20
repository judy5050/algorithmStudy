//
//  11866.cpp
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
    
    
    queue<int>q1;
    queue<int>q2;
    queue<int>res;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        q1.push(i);
    }
    
    while(!q1.empty()){
        
        for(int i=0;i<k-1;i++){
            if(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }else{
                while(!q2.empty()){
                    q1.push(q2.front());
                    q2.pop();
                    
                }
                i--;
            }
           
        }
        
        if(!q1.empty()){
            res.push(q1.front());
            q1.pop();
        }else{
            res.push(q2.front());
            q2.pop();
        }
     
        
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
            
        }
        
        
        
        
        
        
    }
    
    cout<<'<';
    while(!res.empty()){
        
        if(res.size()>1){
            cout<<res.front()<<", ";
            res.pop();
        }else{
            cout<<res.front()<<'>'<<"\n";
            res.pop();
        }
        
        
        
        
    }
   
    
    
    
    
    
    
    return 0;
}
