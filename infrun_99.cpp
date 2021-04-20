//
//  algo_99.cpp
//  algo
//
//  Created by 박효정 on 2021/04/20.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,w,v;
    
    cin>>n>>m;
    vector<int>dy(m+1,0);
    
    for(int i=0;i<n;i++){
        cin>>w>>v;
        for(int j=w;j<=m;j++){
            dy[j]=max(dy[j],dy[j-w]+v);
        }
    }
    
    
    cout<<dy[m]<<"\n";
    
    return 0;
}
