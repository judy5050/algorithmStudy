//
//  1541.cpp
//  algo
//
//  Created by 박효정 on 2021/05/28.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    string s;
    int res=0;
    bool f=false;
    string tmp;
    cin>>s;
    for(int i=0;i<s.size();i++){
        
        if(s[i]=='+'||s[i]=='-'){
            if(f==true){
                res-=stoi(tmp);
            }else{
                
                res+=stoi(tmp);
                if(s[i]=='-'){
                    f=true;
                }
                
            }
            tmp="";
        }
        else{
            tmp+=s[i];
        }
        
    }
    
    if(f==true){
        res-=stoi(tmp);
    }else{
        res+=stoi(tmp);
    }
    
    cout<<res<<"\n";
    
    return 0;
}
