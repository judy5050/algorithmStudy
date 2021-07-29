//
//  2164.cpp
//  algo
//
//  Created by 박효정 on 2021/07/29.
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
    queue<int>q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    
    while(q.size()>1){
        q.pop();
        q.push(q.front());
        q.pop();
        
        
        
        
    }
    
    
    cout<<q.front()<<"\n";
    
    
    
    
    return 0;
}
