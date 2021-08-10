//
//  15961.cpp
//  algo
//
//  Created by 박효정 on 2021/08/10.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,d,k,c;
    cin>>n>>d>>k>>c;
    
    vector<int>v(n+n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n;i<n+n;i++){
        v[i]=v[i-n];
    }
    
    int lt=0;
    int rt=0;
    int cnt=0;
    int res=0;
    vector<int>vis(d+1);
   
    
    while(lt<=n+k){
        if(lt-rt<=k-1){
            if(vis[v[lt]]==0){
                cnt++;
                vis[v[lt++]]++;
            }else{
                vis[v[lt++]]++;
            }
        }else{
            if(vis[v[rt]]==1){
                cnt--;
            }
            vis[v[rt++]]--;
            
        }
        
        if(lt-rt==k){
            if(vis[c]==0){
                res=max(res,cnt+1);
            }else{
                res=max(res,cnt);
            }
           
        }
        
        
        
        
        
        
        
        
    }
    
    cout<<res<<"\n";

    
    
    
    
    
    return 0;
}
