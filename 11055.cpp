

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    //수 입력
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> dp(n);
    int res=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        //초기 자기 값으로 초기화
        dp[i]=v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                dp[j]=max(dp[j],dp[i]+v[j]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        res=max(res,dp[i]);
    }
    cout<<res<<"\n";
    return 0;
}
