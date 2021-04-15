//
//  algo_72.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

queue<int>q;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k;
    
    cin>>n>>k;
    
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    
    int cnt=1;
    int tmp=0;
    while(q.size()!=1){
        
      
      
        if(cnt>n){
            cnt=1;
        }
        if(cnt==k){
            q.pop();
            cnt++;
            
        }
        else{
            tmp=q.front();
            q.pop();
            q.push(tmp);
            cnt++;
        
        }
          
         
       
        
    }
    
    cout<<q.front()<<"\n";
    
    return 0;
}

