//
//  infrun_86.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
vector<pair<int, int>> pz;
vector<pair<int, int>> hs;
int ch[20],m,res=2147000000,dis,sum=0;

void dfs(int l,int s){
    if(l==m){
        sum=0;
        for(int i=0;i<hs.size();i++){
            int x1=hs[i].first;
            int y1=hs[i].second;
            dis=2147000000;
            for(int j=0;j<m;j++){
                int x2=pz[ch[j]].first;
                int y2=pz[ch[j]].second;
                dis=min(dis,abs(x1-x2)+abs(y1-y2));
               
            }
            sum=dis+sum;
           
        }
        if(sum<res) res=sum;
    }
    else{
        for(int i=s;i<pz.size();i++){
            ch[l]=i;
            dfs(l+1,i+1);
        }
    }
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,a;
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a;
            if(a==1) hs.push_back({i,j});
            else if(a==2) pz.push_back({i,j});
        }
        
    }
    
    dfs(0,0);
    cout<<res<<"\n";
    
    
    
    return 0;
}
