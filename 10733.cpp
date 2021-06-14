//
//  10733.cpp
//  algo
//
//  Created by 박효정 on 2021/06/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int res=0;
    int n;
    cin>>n;
    stack<int>s;
    while(n--){
        int a;
        cin>>a;
        
        if(a!=0){
            s.push(a);
        }
        else{
            s.pop();
        }
        
        
    }
    
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    
    
    cout<<res<<"\n";
    return 0;
}
