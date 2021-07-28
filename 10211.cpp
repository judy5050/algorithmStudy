//
//  10211.cpp
//  algo
//
//  Created by 박효정 on 2021/07/28.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        vector<int>sum(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            sum[i]+=sum[i-1]+v[i];
        }
        
        int res=-987654321;
        for(int i=1;i<v.size();i++){
            for(int j=0;j<i;j++){
                res=max(res,sum[i]-sum[j]);
            }
        }
        cout<<res<<"\n";
        
        
        
        
    }
    

    
    
    
    
    
    
    
    
    return 0;
}
