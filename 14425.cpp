//
//  14425.cpp
//  algo
//
//  Created by 박효정 on 2021/07/31.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int cnt=0;
    set<string>s;
    vector<string>v;
    string tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.insert(tmp);
    }
    for(int i=0;i<m;i++){
        cin>>tmp;
        v.push_back(tmp);
       
        
    }
    
    
    for(int i=0;i<m;i++){
        if(s.find(v[i])!=s.end()){
            cnt++;
            
            
        }
    }
    
    cout<<cnt<<"\n";
    
    
    return 0;
}
