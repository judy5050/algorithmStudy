//
//  10972.cpp
//  algo
//
//  Created by 박효정 on 2021/07/27.
//

#include <iostream>
#include <algorithm>
#include <vector>

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
    
    //
    int cnt=0;
    int res=0;
    do{
        
        if(cnt==1){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<' ';
                res++;
            }
            cout<<"\n";
            break;
        }
       
        cnt++;
        
    }while(next_permutation(v.begin(), v.end()));
    
    
    if(res==0){
        cout<<-1<<"\n";
    }
    
    
    
    return 0;
}
