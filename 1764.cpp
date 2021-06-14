//
//  1764.cpp
//  algo
//
//  Created by 박효정 on 2021/06/14.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int res=0;
    vector<string> str;
    int n,m;
    vector<string>tmp;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        string s;
        cin>>s;
        tmp.push_back(s);
        
    }
    sort(tmp.begin(),tmp.end());
    for(int i=0;i<n+m-1;i++){
        if(tmp[i]==tmp[i+1]){
            res++;
            str.push_back(tmp[i]);
        }
    }
    
    cout<<res<<"\n";
    for(int i= 0;i<str.size();i++){
        cout<<str[i]<<"\n";
    }
    
    
    return 0;
}
