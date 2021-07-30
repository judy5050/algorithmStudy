//
//  2493.cpp
//  algo
//
//  Created by 박효정 on 2021/07/30.
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
    
    
    int n;
    cin>>n;
    stack<pair<int, int>>s;

    for(int i=1;i<=n;i++){
        
        int a;
        cin>>a;
        while(!s.empty()&&a>s.top().second){
            s.pop();
        }
        
        if(s.empty()){
            cout<<0<<' ';
        }else{
            cout<<s.top().first<<' ';
        }
        s.push({i,a});
        
        
        
        
        
        
    }
    
    
    cout<<"\n";
    
    
    
    
    return 0;
}
