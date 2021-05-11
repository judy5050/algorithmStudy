//
//  2312.cpp
//  algo
//
//  Created by 박효정 on 2021/05/11.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    int arr[100001];
    memset(arr, 0,sizeof(arr));
    int input;
    int tmp;
    int mol;
    while(n--){
        cin>>input;
        tmp=input;
        for(int i=2;input!=1;i++){
            while(input%i==0){
                arr[i]++;
                input/=i;
            }
            
        }
        for(int i=2;i<=tmp;i++){
            if(arr[i]!=0){
                cout<<i<<' '<<arr[i]<<"\n";
            }
        }
        memset(arr, 0, sizeof(arr));
        
    }
    
    
    
    return 0;
}
