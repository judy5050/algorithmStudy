//
//  10816.cpp
//  algo
//
//  Created by 박효정 on 2021/06/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int> c(m);
    vector<int> res(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    
    sort(v.begin(), v.end());
    for(int i=0;i<m;i++){
        int lt=lower_bound(v.begin(), v.end(), c[i])-v.begin();
        int rt=upper_bound(v.begin(), v.end(), c[i])-v.begin();
        res[i]=rt-lt;
    }
    
    
    for(int i=0;i<m;i++){
        cout<<res[i]<<' ';
    }
    cout<<"\n";
    
    return 0;
}
