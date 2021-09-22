//
//  15656.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
vector<string>s;
vector<int>ve;
void dfs(){
    
    if(s.size()==m){
        for(int j=0;j<s.size();j++){
            cout<<s[j]<<' ';
        }
        cout<<"\n";
        return;
    }
    
    
    for(int i=0;i<ve.size();i++){
        s.push_back(to_string(ve[i]));
        dfs();
        s.pop_back();
    }
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        ve.push_back(input);
    }
    sort(ve.begin(), ve.end());
    dfs();
    
    
    
    
    return 0;
}
