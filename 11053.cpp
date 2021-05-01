#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    int res=0;
    vector<int> v(n);
    vector<int> dp(n);
    
  
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        //초기화
        dp[i]=1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                dp[j]=max(dp[j],dp[i]+1);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        res=max(res,dp[i]);
    }
    
    cout<<res<<"\n";
    
    return 0;
}
