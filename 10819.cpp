//
//  10819.cpp
//  algo
//
//  Created by 박효정 on 2021/07/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int res=0;
    
    sort(v.begin(), v.end());
    do{
        
        int tmp=0;
        for(int i=0;i<v.size()-1;i++){
            tmp+=abs(v[i]-v[i+1]);
            
            
        }
        res=max(res,tmp);
        
        
    }while(next_permutation(v.begin(), v.end()));
    
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
