//
//  15654_1.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

//
//  15654.cpp
//  algo
//
//  Created by 박효정 on 2021/09/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;



int n,m;
vector<int>vis(8);
vector<int>ve;
vector<string>str;
void dfs(){

    if(str.size()==m){
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<' ';
        }
        cout<<"\n";
        return;
    }

    for(int j=0;j<ve.size();j++){
        if(vis[j]==0){
            vis[j]=1;
            str.push_back(to_string(ve[j]));
            dfs();
            vis[j]=0;
            str.pop_back();
        }
          
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

    fill(vis.begin(), vis.end(), 0);
    sort(ve.begin(), ve.end());
    dfs();
    
    
    
    
    return 0;
}
