//
//  infrun_95.cpp
//  algo
//
//  Created by 박효정 on 2021/04/19.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    int res=0;
    cin>>n;
    
    vector<int> v(n);
    vector<int> dy(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    dy[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>v[j]){
                dy[i]=max(dy[i],dy[j]+1);
            }
            if(dy[i]==0){
                dy[i]=1;
            }
            res=max(res,dy[i]);
        }
    }
    
    cout<<res<<"\n";
//    for(int i=0;i<n;i++){
//        cout<<dy[i]<<" ";
//    }
    
    return 0;
}
