//
//  14719.cpp
//  algo
//
//  Created by 박효정 on 2021/08/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int w,h;
    cin>>h>>w;
    
    
    int res=0;
    //세로 가로
    vector<int>v(w+1);
    
    for(int i=1;i<=w;i++){
        cin>>v[i];
    }
    
    for(int i=2;i<w;i++){
        int left=0;
        int right=0;
        
        for(int j=1;j<i;j++){
            left=max(left, v[j]);
        }
        
        for(int j=i+1;j<=w;j++){
            right=max(right,v[j]);
        }
        
        
        int cmp=0;
        cmp=min(right,left);
        if(cmp-v[i]>=0){
            res+=cmp-v[i];
        }
       
        
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    
    return 0;
}
