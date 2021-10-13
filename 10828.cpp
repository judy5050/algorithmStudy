//
//  10828.cpp
//  algo
//
//  Created by 박효정 on 2021/10/12.
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
    
    stack<int>s;
    
    while(n--){
        string str;
        int input;
        cin>>str;
        if(str=="push"){
            cin>>input;
            s.push(input);
        }else if(str=="pop"){
            if(!s.empty()){
                cout<<s.top()<<"\n";
                s.pop();
            }else{
                cout<<-1<<"\n";
            }
            
            
            
        }else if(str=="size"){
            cout<<s.size()<<"\n";
        
            
            
        }else if(str=="empty"){
            if(s.empty()){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        
        }else {
            if(!s.empty()){
                cout<<s.top()<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    return 0;
}
