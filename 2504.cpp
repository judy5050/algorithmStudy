//
//  2504.cpp
//  algo
//
//  Created by 박효정 on 2021/10/20.
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
    
    string str;
    cin>>str;
    stack<char>s;
    bool ch=true;
    int res=0;
    int tmp=1;
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            tmp*=2;
            s.push(str[i]);
        }else if(str[i]=='['){
            tmp*=3;
            s.push(str[i]);
        }else if(str[i]==')'&&!s.empty()&&s.top()=='('){
            if(str[i-1]=='('){
                res+=tmp;
            }
            s.pop();
            tmp/=2;
        }
        else if(str[i]==']'&&!s.empty()&&s.top()=='['){
            if(str[i-1]=='['){
                res+=tmp;
            }
            s.pop();
            tmp/=3;
        }else{
            ch=false;
            break;
        }
    }
    
    
    
    if(ch==true&&s.empty()){
        cout<<res<<"\n";
    }else{
        cout<<0<<"\n";
    }
  
    
    
    
    
    return 0;
}
