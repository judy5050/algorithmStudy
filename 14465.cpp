//
//  14465.cpp
//  algo
//
//  Created by 박효정 on 2021/10/07.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define NUM 100001

using namespace std;

vector<int>arr(NUM);
int res=987654321;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k,b;
    cin>>n>>k>>b;
    
    for(int i=0;i<b;i++){
        int a;
        cin>>a;
        //고장난 신호등 표시
        arr[a]=1;
    }
    
    int lt=1;
    int rt=1;
    //고장난 신호등 수
    int cnt=0;
    while(rt<=n){
       
      
        
        if(rt-lt<k){
            if(arr[rt]==1){
                cnt++;
            }
            if(rt-lt==k-1){
                res=min(res,cnt);
            }
            rt++;
        }else{
            if(arr[lt]==1){
                cnt--;
               
            }
            lt++;
        }   
    }
    
    
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
