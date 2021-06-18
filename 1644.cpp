//
//  1644.cpp
//  algo
//
//  Created by 박효정 on 2021/06/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    vector<bool> cmp(n+1,true);
    for(int i=2;i<=(int)sqrt(n);i++){
        if(cmp[i]==true){
            int j=2;
            while(i*j<=n){
                cmp[i*j]=false;
                j+=1;
            }
        }
    }
    int res=0;
    vector<int>num;
    for(int i=2;i<=n;i++){
        if(cmp[i]==true){
            num.push_back(i);
        }
    }
    int cnt=0;
    int start=0;
    int end=0;
    
    while(1){
        
        if(cnt>=n){
            cnt-=num[start++];
        }
        else if(end==num.size()){
            break;
        }
        else{
            cnt+=num[end++];
        }
        
        if(cnt==n) res++;
        
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    return 0;
}
