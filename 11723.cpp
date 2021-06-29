//
//  11723.cpp
//  algo
//
//  Created by 박효정 on 2021/06/27.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int s[21];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    int m;
    cin>>m;
   
    while(m--){
        string str;
        int tmp=0;
        cin>>str;
        if(str!="all"&&str!="empty"){
            cin>>tmp;
        }
        
        if(str=="add"){
            if(s[tmp]==0){
                s[tmp]=1;
            }
        }
        else if(str=="remove"){
            if(s[tmp]==1){
                s[tmp]=0;
            }
        }
        else if(str=="check"){
            if(s[tmp]==1){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else if(str=="toggle"){
            if(s[tmp]==1){
                s[tmp]=0;
            }
            else{
                s[tmp]=1;
            }
        }
        else if(str=="all"){
            for(int i=1;i<=20;i++){
                s[i]=1;
            }
        }
        else if(str=="empty"){
            for(int i=1;i<=20;i++){
                s[i]=0;
            }
        }
       
    }

    return 0;
}
