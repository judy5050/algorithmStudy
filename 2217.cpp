//
//  2217.cpp
//  algo
//
//  Created by 박효정 on 2021/04/29.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    int res=0;
    int w=0;
    cin>>n;
    vector<int>v(n+1);
    v[0]=987654321;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //내림차 정렬
    sort(v.begin(), v.end(), greater<>());
    res=v[1];
    for(int i=1;i<=n;i++){
        
        res=max(v[i]*i,res);
    }
    
    cout<<res<<"\n";
    
    return 0;
}
