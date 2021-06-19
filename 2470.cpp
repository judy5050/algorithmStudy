//
//  2470.cpp
//  algo
//
//  Created by 박효정 on 2021/06/19.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        
    }
    
    sort(v.begin(), v.end());
    
    int lt=0;
    int rt=n-1;
    int cnt=0;
    int res=2147000000;
    int ans[2];
    stack<pair<int,int>>s;
    while(lt<rt){
       
        cnt=v[rt]+v[lt];
        if(abs(cnt)<res){
            
            s.push({v[lt],v[rt]});
            res=abs(cnt);
            if(cnt==0){
                break;
            }
        }
        
        if(cnt<0){
            lt++;
        }else{
            rt--;
        }
        
        
        
    }
    
    cout<<s.top().first<<' '<<s.top().second<<"\n";
    
    return 0;
}
