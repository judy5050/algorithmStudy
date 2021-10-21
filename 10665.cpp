//
//  10665.cpp
//  algo
//
//  Created by 박효정 on 2021/10/22.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>>v;
int n;
vector<vector<int>>lis;
vector<int>tmp;
//void dfs(int index,int cnt){
//    if(index>=n){
//        if(cnt==1){
//            lis.push_back(tmp);
//        }
//
//        return;
//    }else{
//        if(cnt==0&&index!=0&&index!=n-1){
//            dfs(index+1,cnt+1);
//        }
//
//
//        tmp.push_back(index);
//        dfs(index+1,cnt);
//        tmp.pop_back();
//
//
//    }
//
//}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
  
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    
//    dfs(0,0);
    
//    cout<<lis.size()<<"\n";
    long long sum=0;
    vector<int>vis(n);
    for(int i=1;i<n;i++){
        sum+=abs(v[i-1].first-v[i].first)+abs(v[i-1].second-v[i].second);
    }
   
    long long res=300000000;
    for(int i=1;i<n-1;i++){
        sum-=abs(v[i-1].first-v[i].first)+abs(v[i-1].second-v[i].second);
        sum-=abs(v[i].first-v[i+1].first)+abs(v[i].second-v[i+1].second);
        sum+=abs(v[i-1].first-v[i+1].first)+abs(v[i-1].second-v[i+1].second);
        res=min(sum,res);
        sum+=abs(v[i-1].first-v[i].first)+abs(v[i-1].second-v[i].second);
        sum+=abs(v[i].first-v[i+1].first)+abs(v[i].second-v[i+1].second);
        sum-=abs(v[i-1].first-v[i+1].first)+abs(v[i-1].second-v[i+1].second);
    }
    
    cout<<res<<"\n";
    
    
    return 0;
}
