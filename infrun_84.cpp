//
//  infrun_84.cpp
//  algo
//
//  Created by 박효정 on 2021/04/17.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n;
vector<int> t,p;
int res;
int ch[16];
void dfs(int l, int sum){
    
    if(l==n+1) {
        if(res<sum){
            res=sum;
        }
    }
    else{
        
        if(l+t[l]<=n+1) dfs(l+t[l],sum+p[l]);
        else dfs(l+1,sum);
       
        
        
        
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    t.push_back(0);
    p.push_back(0);
    
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        t.push_back(a);
        p.push_back(b);
    }
    
    dfs(1,0);
    
    
    cout<<res<<"\n";
    
    
    
    
    
    
    
    return 0;
}
