//
//  20922.cpp
//  algo
//
//  Created by 박효정 on 2021/06/23.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k;
    
    cin>>n>>k;
    
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ch(200001,0);
    
    int lt=0;
    int rt=0;
    int res=-1;
    ch[v[rt]]++;
    while(lt<=rt){
        
      
        
        if(rt==v.size()){
           break;
           
       }
        
        if(ch[v[rt]]>k)
        {
            ch[v[lt]]--;
            lt++;
        }
        
        else {
            res=max(res,rt-lt+1);
            rt++;
            ch[v[rt]]++;
            
           
          
        }

     
        
        
        
        
        
        
        
        
        
    }
    
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
