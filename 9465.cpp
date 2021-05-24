//
//  9465.cpp
//  algo
//
//  Created by 박효정 on 2021/05/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int cnt;
    cin>>cnt;
    int dp[2][100005];
    int arr[2][100005];
   
    
    while(cnt--){
        
        int n;
        int res=0;
        cin>>n;
        memset(dp, 0, sizeof(dp));
        memset(arr, 0, sizeof(arr));
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        dp[0][0]=arr[0][0];
        dp[1][0]=arr[1][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<2;j++){
                //위쪽이면
                if(j==0){
                    if(i-2<0){
                        dp[j][i]=max(dp[j+1][i-1],0)+arr[j][i];
                    }
                    else{
                        dp[j][i]=max(dp[j+1][i-1],dp[j][i-2])+arr[j][i];
                        dp[j][i]=max(dp[j][i],dp[j+1][i-2]+arr[j][i]);
                    }
                   
                }
                //아래쪽이면
                else if(j==1){
                    if(i-2<0){
                        dp[j][i]=max(dp[j-1][i-1],0)+arr[j][i];
                    }
                    else{
                        dp[j][i]=max(dp[j-1][i-1],dp[j][i-2])+arr[j][i];
                        dp[j][i]=max(dp[j][i],dp[j-1][i-2]+arr[j][i]);
                    }
                    
                }
            }
          
        }
        
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                res=max(dp[i][j],res);
            }
        }
        cout<<res<<"\n";
        
        
        
        
    }
    
    
    return 0;
}
