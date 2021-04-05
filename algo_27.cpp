//
//  algo_27.cpp
//  algo
//
//  Created by 박효정 on 2021/04/02.
//

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,tmp,j;
    cin>>n;
    vector<int> ch(n+1);
    for(int i=2;i<=n;i++){
        tmp=i;
        j=2;
        while(1){
            if(tmp%j==0){
                tmp=tmp/j;
                ch[j]++;
            }
            else j++;
            if(tmp==1) break;
            
            
            
        }
    }
    
    cout<<n<<"! = ";
    for(int i=2;i<=n;i++){
        if(ch[i]!=0) cout<<ch[i]<<" ";
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
