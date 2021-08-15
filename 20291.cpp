//
//  20291.cpp
//  algo
//
//  Created by 박효정 on 2021/08/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>


using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    string s;
    map<string,int>m;
    while(n--){
        string tmp="";
        cin>>s;
        int pos=0;
        while(s[pos]!='.'){
            pos++;
        }
        
        for(int i=pos+1;i<s.size();i++){
            tmp+=s[i];
        }
        
        if(m[tmp]==0){
            m[tmp]=1;
            
        }else{
            m[tmp]++;
        }
        
        
        
        
    }
    
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<' '<<i->second<<"\n";
    }
    
    
    
    
    
    
    return 0;
}
