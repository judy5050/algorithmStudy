//
//  13458.cpp
//  algo
//
//  Created by 박효정 on 2021/08/05.
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
    vector<int>v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    int b,c;
    cin>>b>>c;
    long long  cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]-b<=0){
            cnt+=1;
        }else{
            if((v[i]-b)%c==0){
                cnt+=(v[i]-b)/c;
                cnt+=1;
            }else{
                cnt+=((v[i]-b)/c)+1;
                cnt+=1;
            }
            
            
        }
        
        
        
        
        
        
    }
    
    cout<<cnt<<"\n";
    
    
    
    
    return 0;
}
