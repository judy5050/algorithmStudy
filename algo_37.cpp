//
//  algo_37.cpp
//  algo
//
//  Created by 박효정 on 2021/04/07.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int s,n,pos=-1;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>s>>n;
    vector<int> v(s);
    vector<int> input(n);
    
    //입력
    for(int i=0;i<n;i++){
        cin>>input[i];
        
    }
    
    
    for(int i=0;i<n;i++){
        pos=-1;
        for(int j=0;j<s;j++)
        {
            if(v[j]==input[i]){
                pos=i;
                break;
            }
            
            
            
        }
        
        //캐시 히트
        if(pos!=-1){
            for(int j=pos;j>0;j--){
                v[j]=v[j-1];
            }
        }
        
        //캐시 미스
        else{
            for(int j=n-1;j>0;j--){
                v[j]=v[j-1];
            }
        }
        v[0]=input[i];
           
    }
    
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    
    
    cout<<"\n";
    
    
    
    
    return 0;
}
