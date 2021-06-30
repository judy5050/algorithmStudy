//
//  1874.cpp
//  algo
//
//  Created by 박효정 on 2021/06/30.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    stack<int>s;
    int n;
    cin>>n;
    queue<char> res;
    bool ch=true;
    //스택에 쌓음
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int index=0;
    for(int i=1;i<=n;i++){
        while(!s.empty()&&v[index]==s.top()){
            res.push('-');
            s.pop();
            index++;
        }
            s.push(i);
            res.push('+');
      
        
    }
  

    while(!s.empty()){
        if(v[index]==s.top()){
            res.push('-');
            s.pop();
            index++;
        }else{
            ch=false;
            break;
        }
        
        
        
        
    }
        
        
        
        
    if(ch==true){
        while(!res.empty()){
            cout<<res.front()<<"\n";
            res.pop();
        }
        
        
    }
    else{
        cout<<"NO"<<"\n";
    }
        
    
    
    
    
    
    
    
    return 0;
}
