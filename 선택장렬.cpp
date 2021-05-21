//
//  선택장렬.cpp
//  algo
//
//  Created by 박효정 on 2021/05/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=10;
int arr[10]={2,5,6,7,8,9,1,3,4,10};
int target;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for(int i=0;i<n;i++){
        target=i;
        for(int j=i+1;j<n;j++){
            if(arr[target]>arr[j]){
                target=j;
            }
        }
        swap(arr[i], arr[target]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
