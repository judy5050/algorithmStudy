//
//  algo_45.cpp
//  algo
//
//  Created by 박효정 on 2021/04/08.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,k;
int res;
int cnt=1;
int check=0;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>k;
    vector<int> v(n+1);
    
    for(int i=1;i<=n;i++){
        v[i]=0;
    }
    
    while(check<=n-1){
      
        for(int i=1;i<k;i++){
            if(v[cnt]==-1){
                i=i-1;
            }
            cnt++;
            if(cnt>n){
                cnt=1;
                if(v[1]==-1){
                    i=i-1;
                }
            }
        }
        v[cnt]=-1;
        check++;
 
    }
    
    for(int i=1;i<=n;i++){
        if(v[i]!=-1)
        {
            res=i;
        }
          
    }
    
    
    cout<<res<<"\n";
    
    
    return 0;
}
