//
//  algo_50.cpp
//  algo
//
//  Created by 박효정 on 2021/04/11.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[7][52];
int high=-21470000;
int uh,uw;
int sum=0;
int check(int h,int w){
    sum=0;
    for(int i=h;i<uh+h;i++){
        for(int j=w;j<uw+w;j++){
            sum=sum+arr[i][j];
        }
    }
    
    return sum;
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int h,w;
    
    cin>>h>>w;
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
        }
    }
    
    cin>>uh>>uw;
    

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            high=max(check(i, j),high);
        }
    }
    
    
    
    cout<<high<<"\n";
    
    
}
