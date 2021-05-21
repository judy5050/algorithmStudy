//
//  동빈나_정렬_1.cpp
//  algo
//
//  Created by 박효정 on 2021/05/21.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    int res=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    //오름차
    sort(a.begin(), a.end());
    //내림차
    sort(b.begin(), b.end(), greater<>());
    
        while(k--){
        
        swap(a[0], b[0]);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());
    }
    
    for(int i=0;i<n;i++){
        res+=a[i];
    }
    cout<<res<<"\n";
    
        return 0;
}
