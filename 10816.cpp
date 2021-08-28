//
//  10816.cpp
//  algo
//
//  Created by 박효정 on 2021/08/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>


using namespace std;


unordered_map<int,int>lis;


int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    int n,m;
    cin>>n;
 
    
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        lis[input]++;
        
    }
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>input;
        if(lis[input]!=0){
            cout<<lis[input]<<' ';
        }else{
            cout<<0<<' ';
        }
        
    }
    
    cout<<"\n";
    
    
    
    return 0;
}
