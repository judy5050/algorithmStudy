//
//  algo_48.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[9][9];
double sum;
int res[9];
int num[9];
int tmp=217000000;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
        res[i]=round(sum/9);
        sum=0;
    }
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(tmp>abs(res[i]-arr[i][j])){
                tmp=abs(res[i]-arr[i][j]);
                num[i]=arr[i][j];
            }
            else if(tmp==abs(res[i]-arr[i][j])){
                num[i]=max(num[i],arr[i][j]);
            }
        }
        tmp=217000000;
    }
    
    
    
    for(int i=0;i<9;i++){
        cout<<res[i]<<" "<<num[i]<<"\n";
    }
    
    
    return 0;
}
