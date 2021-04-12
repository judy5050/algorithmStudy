//
//  algo_60.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int num[1000001];
int cmp[1000001];
int l=0;
int check=0;
int sum1=0;
int sum2=0;
int dfs(int l){

   
    if(l==n+1){
        for(int i=0;i<n;i++){
            if(cmp[i]==1){
                sum1+=num[i];
            }
            else if(cmp[i]==0){
                sum2+=num[i];
            }
        }
        if(sum1==sum2){
            check=1;
            return check;
        }
        sum1=0;
        sum2=0;

    }
    else{
        cmp[l]=1;
        dfs(l+1);
        cmp[l]=0;
        dfs(l+1);
        
        
        
        
    }
    
    
    
    
    
    
    return check;
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    
    
    for(int i=0;i<n;i++){
        cin>>num[i];
        
    }
    
    int res=0;
    res=dfs(l);
    
    if(res==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    
    
    
    return 0;
}
