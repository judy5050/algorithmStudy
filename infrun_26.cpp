//
//  infrun_26.cpp
//  algo
//
//  Created by 박효정 on 2021/04/02.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,cnt=0;
    
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
   
    cout<<"1 ";
    for(int i=2;i<=n;i++){
        cnt=0;
        for(int j=i-1;j>=1;j--){
            if(a[j]>=a[i]){
                cnt++;
        }
    }
        cout<<cnt+1<<" ";
}
   
    
    
    
    
    
    
    
    
    
    return 0;
}
