//
//  삽입정렬.cpp
//  algo
//
//  Created by 박효정 on 2021/05/21.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int target[10]={9,2,3,5,6,7,1,4,8,10};
int n=10;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            if(target[j]<target[j-1]){
                swap(target[j],target[j-1]);
            }
            else{
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<target[i]<<' '<<"\n";
    }
    
    
    
    
    
    return 0;
}
