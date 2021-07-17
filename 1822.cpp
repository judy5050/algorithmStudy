//
//  1822.cpp
//  algo
//
//  Created by 박효정 on 2021/07/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    int a,b;
    cin>>a>>b;
    vector<int>v1(a);
    vector<int>v2(b);
    
    for(int i=0;i<a;i++){
        cin>>v1[i];
        
    }
    for(int i=0;i<b;i++){
        cin>>v2[i];
        
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int index1=0;
    int index2=0;
    
    vector<int>res;
    
    while(index1<v1.size()&&index2<v2.size()){
        if(v1[index1]<v2[index2]){
            res.push_back(v1[index1]);
            index1++;
        }
        else if(v1[index1]==v2[index2]){
            index1++;
            index2++;
        }
        else{
            
            index2++;
        }
        
        
        
        
        
    }
    
    while(index1<v1.size()){
        if(v1[index1]!=v2[index2]){
            res.push_back(v1[index1++]);
        }else{
            index1++;
        }
      
    }
    
    
    if(res.size()==0){
        cout<<res.size()<<"\n";
    }else{
        sort(res.begin(), res.end());
        cout<<res.size()<<"\n";
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<' ';
        }
        cout<<"\n";
        
    }
    
  
    
    
    return 0;
}
