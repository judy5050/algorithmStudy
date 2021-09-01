//
//  14501.cpp
//  algo
//
//  Created by 박효정 on 2021/09/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[17];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    
    vector<pair<int, int>>v;
    v.push_back({0,0});
    cin>>n;
    for(int i=1;i<=n;i++){
        int t,p;
        cin>>t>>p;
        v.push_back({t,p});
    }
    
    int res=0;
    for(int i=n;i>=1;i--){
        if(v[i].first+i<=n+1){
            dp[i]=max(dp[i+1],dp[i+v[i].first]+v[i].second);
        }else{
            dp[i]=max(dp[i+1],0);
        }
        res=max(res,dp[i]);
    }
    
    
    cout<<res<<"\n";
    
    return 0;
}
