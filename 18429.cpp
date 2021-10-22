//
//  18429.cpp
//  algo
//
//  Created by 박효정 on 2021/10/22.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k;
    
    cin>>n>>k;
    vector<int>v(n);
    vector<int>lis(n);
    
    //입력
    for(int i=0;i<n;i++){
        cin>>v[i];
        lis[i]=i;
    }
    
   
    int res=0;
    sort(lis.begin(), lis.end());
    //순열
    do{
        bool ch=true;
        int d=500;
        for(int i=0;i<lis.size();i++){
            cout<<lis[i]<<' ';
            d-=k;
            d+=v[lis[i]];
            if(d<500){
                ch=false;
                break;
            }
        }
        cout<<"\n";
        if(ch==true){
            res++;
        }
        
    }while(next_permutation(lis.begin(), lis.end()));
    
    
    
    cout<<res<<"\n";
    
    
    return 0;
}
