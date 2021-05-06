//
//  2010.cpp
//  algo
//
//  Created by 박효정 on 2021/05/05.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    int res=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end(),greater<>());
    
    //맨 처음 가장 플러그 수 많은 멀티텝을 연결했을떼
    res+=v[0];
    for(int i=1;i<n;i++){
        if(v[i-1]>=1){
            res--;
            res+=v[i];
        }
        
    }
    cout<<res<<"\n";
    
    return 0;
}
