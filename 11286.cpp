//
//  11286.cpp
//  algo
//
//  Created by 박효정 on 2021/07/31.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>


using namespace std;

struct qu{
    int val;
    int abs;
    
    qu(int a,int b){
        val=a;
        abs=b;
    }
    
    bool operator <(const qu & b)const{
  
        if(abs==b.abs){
            return val>b.val;
        }else{
            return abs>b.abs;
        }
        
    }
    
    
};

int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    priority_queue<qu>pq;
    int n;
    cin>>n;
    int a;
    while(n--){
        
        cin>>a;
        if(a!=0){
            pq.push(qu({a,abs(a)}));
        }else{
            
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                cout<<pq.top().val<<"\n";
                pq.pop();
            }
        }
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    return 0;
}
