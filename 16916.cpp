//
//  16916.cpp
//  algo
//
//  Created by 박효정 on 2021/09/20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define INF 1000001

using namespace std;

int fail[INF];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    string s,p;
    cin>>s>>p;
    bool ch=false;
    for(int i=1,j=0;i<p.size();i++){
        while(j>0&&p[i]!=p[j])j =fail[j-1];
        if(p[i]==p[j]) fail[i]=++j;
    }
    
    for(int i=0,j=0;i<s.size();i++){
        while(j>0&&s[i]!=p[j]) j=fail[j-1];
        if(s[i]==p[j]){
            if(j==p.size()-1){
                ch=true;
            }
            j++;
        }
    }
  
    
    
    if(ch==true){
        cout<<1<<"\n";
    }else{
        cout<<0<<"\n";
    }
    
    
    return 0;
}
