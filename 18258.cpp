//
//  18258.cpp
//  algo
//
//  Created by 박효정 on 2021/10/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>



using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    deque<int>q;
    
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="push"){
            int input;
            cin>>input;
            q.push_back(input);
        }else if(s=="front"){
            
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.front()<<"\n";
            }
           
        }else if(s=="pop"){
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.front()<<"\n";
                q.pop_front();
            }
        }else if(s=="size"){
            cout<<q.size()<<"\n";
        }else if (s=="empty"){
            if(q.empty()){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }else if(s=="back"){
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.back()<<"\n";
//                q.pop_back();
            }
          
        }
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
