//
//  2230.cpp
//  algo
//
//  Created by 박효정 on 2021/05/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    

    int res=2147000000;
        int lt,rt;
        lt=0;
        rt=1;
        while(rt<n){
            if(abs(v[lt]-v[rt])<m){
                
                    rt++;
                
               
            }
            else if(abs(v[lt]-v[rt])>m){
                
                res=min(res,abs(v[lt]-v[rt]));
                lt++;
                
            }
            else if(abs(v[lt]-v[rt])==m){
                res=min(res,abs(v[lt]-v[rt]));
                break;
            }
            
            
            
            
            
            
        }
       
        
        
    
   
    cout<<res<<"\n";
    
    return 0;
}
