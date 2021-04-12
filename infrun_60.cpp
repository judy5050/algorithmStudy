//
//  infrun_60.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>


using namespace std;

int n,a[11],total=0;
bool flag=false;
void dfs(int L,int sum){
    if(sum>(total/2)) return ;
    if(flag==true) return ;
    if(L==n+1){
        flag=true;
    }
    else{
        dfs(L+1,sum+a[L]);
        dfs(L+1,sum);
    }
}


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        total+=a[i];
    }
    
    dfs(1,0);
    
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
    
    
    return 0;
}
