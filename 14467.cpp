//
//  14467.cpp
//  algo
//
//  Created by 박효정 on 2021/08/13.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    vector<int>v[10];
    
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v[a-1].push_back(b);
    }
    
    int cnt=0;
    for(int i=0;i<10;i++){
        if(v[i].size()!=0){
            for(int j=0;j<v[i].size()-1;j++){
                if(j+1<v[i].size()){
                    if(v[i][j]!=v[i][j+1]){
                        cnt++;
                    }
                }
              
        }
      
            
            
            
            
            
            
        }
        
        
        
        
        
        
    }
   
    cout<<cnt<<"\n";
    
    
    
    
    return  0;
}
