//
//  4949.cpp
//  algo
//
//  Created by 박효정 on 2021/06/13.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    bool ch=false;
    
    
    while(1){
        ch=false;
        stack<char>t;
        char s[101];
        cin.getline(s,101);
        if(!strcmp(s,".")) break;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='('){
                t.push('(');
            }
            else if(s[i]=='[')
            {
                t.push('[');
            }
            else if(s[i]==')'){
                if(!t.empty()&&t.top()=='('){
                    t.pop();
                }
                else{
                    ch=true;
                    break;
                }
            }
            else if(s[i]==']'){
                if(!t.empty()&&t.top()=='['){
                    t.pop();
                }
                else{
                    ch=true;
                    break;
                }
            }
        }
        if(ch==true||!t.empty()){
            cout<<"no"<<"\n";
        }
        else{
            cout<<"yes"<<"\n";
        }
        
    
        
    }

    
    return 0 ;
    
}

