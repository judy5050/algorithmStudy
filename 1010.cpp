//
//  1010.cpp
//  algo
//
//  Created by 박효정 on 2021/07/26.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int dp[30][30];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    //dp 초기화
    for(int i=1;i<30;i++){
        dp[1][i]=i;
    }
    
    for(int i=2;i<30;i++){
        for(int j=i;j<30;j++){
            for(int k=j;k>=i;k--){
                dp[i][j]+=dp[i-1][k-1];
            }
            

        }
    }
    
    int n;
    int a,b;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<dp[a][b]<<"\n";
    }
    
    
    
    
    return 0;
}
