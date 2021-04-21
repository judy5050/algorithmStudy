//
//  2750.cpp
//  algo
//
//  Created by 박효정 on 2021/04/21.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\n";
    }
    
}
