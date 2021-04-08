//
//  algo_42.cpp
//  algo
//
//  Created by 박효정 on 2021/04/08.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,key;
int start,mid,last;
int cnt;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>key;
    
    
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    start=0;
    last=n-1;
    
    while(1){
        mid=(start+last)/2;
        if(v[mid]==key){
            break;
        }
        else if(v[mid]<key){
            start=mid+1;
            
        }
        else if(v[mid]>key){
            last=mid-1;
        }
        
        
        
        
        
        
    }
    
    
    
    cout<<mid+1<<"\n";
    
    
    
    return 0;
}

