//
//  11728.cpp
//  algo
//
//  Created by 박효정 on 2021/08/08.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int a;
    int b;
    cin>>a>>b;
    vector<int>a_list(a);
    vector<int>b_list(b);
    vector<int>res;
    
    
    for(int i=0;i<a;i++){
        cin>>a_list[i];
    }
    
    for(int i=0;i<b;i++){
        cin>>b_list[i];
    }

    sort(a_list.begin(),a_list.end());
    sort(b_list.begin(), b_list.end());
    
    int a_point=0;
    int b_point=0;
    
    while(a_point<a&&b_point<b){
        if(a_list[a_point]<b_list[b_point]){
            res.push_back(a_list[a_point++]);
        }else{
            res.push_back(b_list[b_point++]);
        }
    }
    
    while(a_point<a){
        res.push_back(a_list[a_point++]);
    }
    
    while(b_point<b){
        res.push_back(b_list[b_point++]);
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<' ';
    }
    cout<<"\n";
    
    return 0;
}
