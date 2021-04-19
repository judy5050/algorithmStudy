//
//  algo_94.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dy[1001];
int arr[1001];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,res=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    dy[0]=1;
    for(int i=0;i<n;i++){
       for(int j=0;j<i;j++){
           if(arr[i]>arr[j]){
               dy[i]=max(dy[i],dy[j]+1);
           }
           else{
               dy[i]=1;
           }
        }
    }
    
    for(int i=0;i<n;i++){
        res=max(res,dy[i]);
    }
    
    cout<<res<<"\n";
    
    
    return 0;
}
