//
//  algo_100.cpp
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
    
    int n,m;
    cin>>n;
    vector<int> v(n+1,0);
 
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int>dy(m+1,2147000000);
    dy[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=v[i];j<=m;j++){

                dy[j]=min(dy[j],dy[j-v[i]]+1);

        }
    }
    for(int i=1;i<=m;i++){
        cout<<dy[i]<<" ";
    }
    cout<<"\n";
    
    cout<<dy[m]<<"\n";
    return 0;
}
