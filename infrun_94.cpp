//
//  infrun_94.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,res=0;
    
    cin>>n;
    vector<int> arr(n+1),dy(n+1);
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    dy[1]=1;
    
    for(int i=2;i<=n;i++){
        int high=0;
        for(int j=i-1;j>=1;j--){
            if(arr[j]<arr[i]&&dy[j]>high){
                high=dy[j];
            }
        }
        dy[i]=high+1;
        if(dy[i]>res) res=dy[i];
    }
    
    
    
    cout<<res<<"\n";
    
    
    
    
    
    
    return 0;
}
