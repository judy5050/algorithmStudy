//
//  infrun_46.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int a[2001];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k,i,p=0,cnt=0,tot=0;
    
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        tot+=a[i];
    }
    cin>>k;
    if(k>=tot){
        cout<<-1<<"\n";
        return 0;
    }
    while(1){
        p++;
        if(p>n) p=1;
        if(a[p]==0) continue;
        a[p]--;
        cnt++;
        if(cnt==k) break;
    }
    
    while(1){
        p++;
        if(p>n)p=1;
        if(a[p]!=0) break;
    }
    cout<<p<<"\n";
    
    
    
    return 0;
}

