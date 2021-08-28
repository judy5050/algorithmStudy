////
////  5556.cpp
////  algo
////
////  Created by 박효정 on 2021/08/26.
////
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int n,k;
vector<string>lis;
vector<int>v;
int res=0;





int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);



    cin>>n>>k;
    map<string,int>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

 
    sort(v.begin(), v.end());
    do{
        string s="";
        for(int i=0;i<k;i++){
            s+=to_string(v[i]);
        }
         if(m[s]==0){
             m[s]++;
             res++;
        }
        
        
    }while (next_permutation(v.begin(), v.end()));
    




    cout<<res<<"\n";
    return 0;
}


