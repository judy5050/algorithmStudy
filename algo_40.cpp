//
//  algo_40.cpp
//  algo
//
//  Created by 박효정 on 2021/04/07.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int>res;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    int p1=0,p2=0,p3=0;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    
    cin>>m;
    vector<int>v2(n);
    
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(),v2.end());
    
    
    while(p1<n&&p2<m){
        if(v1[p1]<v2[p2]){
            p1++;
        }
        else if(v1[p1]>v2[p2]){
            p2++;
        }
        else if(v1[p1]==v2[p2]){
            res.push_back(v1[p1]);
            p1++;
            p2++;
        }
        
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
    cout<<"\n";
    return 0;
}
