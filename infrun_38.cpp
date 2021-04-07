//
//  infrun_38.cpp
//  algo
//
//  Created by 박효정 on 2021/04/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,pos;
    cin>>n;
    vector<int> is(n+1),os(n+1);
    for(int i=1;i<=n;i++){
        cin>>is[i];
    }
    
    
    for(int i=n;i>=1;i--){
        pos=i;
        for(int j=1;j<=is[i];j++){
            os[pos]=os[pos+1];
            pos++;
        }
        os[pos]=i;
        
        
    }
    
    for(int i=1;i<=n;i++){
        
        cout<<os[i]<<" ";
        
    }
    
    cout<<"\n";
    
    
    return 0;
}
