//
//  14602.cpp
//  algo
//
//  Created by 박효정 on 2021/10/07.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int arr[31][31];
int b[31][31];
int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m,k,w;
    cin>>m>>n>>k>>w;
    vector<vector<int>>bb;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    
    for(int i=0;i<m;i++){
        vector<int>tmp;
        for(int j=0;j<n;j++){
            vector<int>lis;
            //행 순환
            for(int nx=i;(nx-i)<w;nx+=1){
                for(int ny=j;(ny-j)<w;ny+=1){
                    if(nx<m&&ny<n){
                        lis.push_back(arr[nx][ny]);
                    }
                }
            }
            if(w*w==lis.size()){
                sort(lis.begin(), lis.end());
                b[i][j]=lis[lis.size()/2];
                tmp.push_back(lis[lis.size()/2]);
            }
        
        }
        if(!tmp.empty()){
            bb.push_back(tmp);
        }
            
       
        
    }
    
    for(int i=0;i<bb.size();i++){
        for(int j=0;j<bb[i].size();j++){
            if(bb[i][j]!=0){
                cout<<bb[i][j]<<' ';
            }
               
        }
        cout<<"\n";
    }
    
    
    
    
    return 0;
}
