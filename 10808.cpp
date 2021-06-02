//
//  10808.cpp
//  algo
//
//  Created by 박효정 on 2021/06/02.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int res[101];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    string s;
    
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        res[s[i]-'a']++;
    }
    
    for(int i=0;i<=('z'-'a');i++){
        cout<<res[i]<<" ";
    }
    
    cout<<"\n";
    
    
    return 0;
}
