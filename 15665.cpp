//
//  15665.cpp
//  algo
//
//  Created by 박효정 on 2021/09/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
vector<int>ve;
vector<int>lis;


void dfs(int num){
    if(lis.size()==m||num>=n){
        if(lis.size()==m){
            for(int i=0;i<lis.size();i++){
                cout<<lis[i]<<' ';
            }
            cout<<"\n";
        }
       
        return;
    }


    for(int i=0;i<ve.size();i++){
        lis.push_back(ve[i]);
        dfs(i);
        lis.pop_back();
     
    }
 
    
   



   
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        ve.push_back(input);
    }
    sort(ve.begin(), ve.end());
    ve.erase(unique(ve.begin(), ve.end()),ve.end());
    
    dfs(0);
    
    
    
    
    return 0;
}
