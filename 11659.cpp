//
//  11659.cpp
//  algo
//
//  Created by 박효정 on 2021/08/08.
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
    cin>>n>>m;
    
    vector<int>v(n+1);
    vector<int>s(n+1);
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
        s[i]=sum;
    }
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cout<<(s[b]-s[a-1])<<"\n";
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
