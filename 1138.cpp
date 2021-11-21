//
//  1138.cpp
//  algo
//
//  Created by 박효정 on 2021/11/21.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int arr[11];
int res[11];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
    for(int i=0;i<n;i++){
        int cnt=arr[i];
        for(int j=0;j<n;j++){
            if(cnt==0&&res[j]==0){
                res[j]=i+1;
                break;
            }
            if(res[j]==0){
                cnt--;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<res[i]<<' ';
    }
    cout<<"\n";
    
    
    
    
    
    
    return 0;
}
