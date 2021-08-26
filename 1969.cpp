//
//  1969.cpp
//  algo
//
//  Created by 박효정 on 2021/08/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    vector<string>s;
    string res="";
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.push_back(str);
    }
    
    
    for(int i=0;i<s[0].size();i++){
        map<int,int>val;
        int pos=0;
        int check=0;
        for(int j=0;j<n;j++){
            string tmp=s[j];
            val[tmp[i]-'A']++;
            
            
        }
        for(auto j=val.begin();j!=val.end();j++){
            if(check<j->second){
                check=j->second;
                pos=j->first;
            }
            
        }
        res+=pos+'A';
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        string tmp=s[i];
        for(int j=0;j<res.size();j++){
          
            if(tmp[j]!=res[j]){
                cnt++;
            }
        }
    }
    
    cout<<res<<"\n";
    cout<<cnt<<"\n";
    
    
    return 0;
}
