//
//  15649.cpp
//  algo
//
//  Created by 박효정 on 2021/05/13.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
int ch[9];
int arr[9];

void dfs(int c){
    
    if(c==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    else{
        //아직 선택전이면
        for(int i=1;i<=n;i++){
            if(ch[i]==0){
                ch[i]=1;
                arr[c]=i;
                dfs(c+1);
                ch[i]=0;
            }
        }
        
    }
    
}




int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    
    dfs(0);
    
    
    
    
    
    return 0;
}
