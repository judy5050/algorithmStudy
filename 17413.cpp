//
//  17413.cpp
//  algo
//
//  Created by 박효정 on 2021/09/20.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    string s;
    getline(cin, s);
    int pos=0;
    stack<char>sta;
    while(pos<s.size()){
       
       
        while(s[pos]!='<'&&s[pos]!=' '&&pos<s.size()){
            sta.push(s[pos++]);
        }
        if(s[pos]==' '){
            while(!sta.empty()){
                cout<<sta.top();
                sta.pop();
            }
            pos++;
            cout<<' ';
        }else if(s[pos]=='<'){
            while(!sta.empty()){
                cout<<sta.top();
                sta.pop();
            }
            while(s[pos]!='>'){
                cout<<s[pos++];
            }
            cout<<s[pos++];
       
        }
        
        
        
        
        
    }
    
    while(!sta.empty()){
        cout<<sta.top();
        sta.pop();
    }
    cout<<"\n";
    
    
    
    return 0;
}

