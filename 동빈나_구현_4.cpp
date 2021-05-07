//
//  동빈나_그리디_4.cpp
//  algo
//
//  Created by 박효정 on 2021/05/07.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    string s;
    vector<char>v;
    cin>>s;
    int tmp=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            tmp+=s[i]-'0';
        }
        else{
            v.push_back(s[i]);
        }
    }
    
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    if(tmp!=0){
        cout<<tmp<<"\n";
    }
    
    return 0;
}
