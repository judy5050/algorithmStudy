//
//  algo_54.cpp
//  algo
//
//  Created by 박효정 on 2021/04/11.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

stack<char>s;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    string str;
    
    cin>>str;
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='(')
        {
            s.push('(');
        }
        else if(str[i]==')'&&!s.empty()){
            s.pop();
            
            
        }
        else if(str[i]==')'&&s.empty()){
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    
    if(s.empty()){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    
    
    return 0;
}
