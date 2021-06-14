//
//  1427.cpp
//  algo
//
//  Created by 박효정 on 2021/06/11.
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
    
    
    int n;
    cin>>n;
    int arr[10];
    fill(arr, arr+10, 0);
    while(n!=0){
        int num=n%10;
        arr[num]++;
        n/=10;
    }
    
    for(int i=9;i>=0;i--){
        if(arr[i]!=0){
            while(arr[i]--){
                cout<<i;
            }
           
        }
    }
    cout<<"\n";
    
    return 0;
}
