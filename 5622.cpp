//
//  5622.cpp
//  algo
//
//  Created by 박효정 on 2021/08/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[('Z'-'A')+1];
int cnt[10];

void init(){
    
    
    arr['A'-'A']=2;
    arr['B'-'A']=2;
    arr['C'-'A']=2;
    
    arr['D'-'A']=3;
    arr['E'-'A']=3;
    arr['F'-'A']=3;
    
    
    arr['G'-'A']=4;
    arr['H'-'A']=4;
    arr['I'-'A']=4;
    
    arr['J'-'A']=5;
    arr['K'-'A']=5;
    arr['L'-'A']=5;
  
    arr['M'-'A']=6;
    arr['N'-'A']=6;
    arr['O'-'A']=6;
    
    arr['P'-'A']=7;
    arr['Q'-'A']=7;
    arr['R'-'A']=7;
    arr['S'-'A']=7;
    
    arr['T'-'A']=8;
    arr['U'-'A']=8;
    arr['V'-'A']=8;
    
    arr['W'-'A']=9;
    arr['X'-'A']=9;
    arr['Y'-'A']=9;
    arr['Z'-'A']=9;
    
    for(int i=2;i<=9;i++){
        cnt[i]=i+1;
    }
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int res=0;
    string s;
    cin>>s;
    
    init();
    for(int i=0;i<s.size();i++){
        res+=cnt[arr[s[i]-'A']];
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    
    return 0;
}
