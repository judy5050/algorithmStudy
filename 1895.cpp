//
//  1895.cpp
//  algo
//
//  Created by 박효정 on 2021/10/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[41][41];
vector<vector<int>>tmp;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int r,c;
    int res=0;
    cin>>r>>c;
    
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
   
   
    for(int i=0;i<r;i++){
        vector<int>r_t;
        for(int j=0;j<c;j++){
            vector<int>lis;
            for(int nx=i;(nx-i)<3;nx++){
                if(nx>=r){
                    break;
                }
                for(int ny=j;(ny-j)<3;ny++){
                    if(ny>=c){
                        break;
                    }
                    lis.push_back(arr[nx][ny]);
                    
                }
                
            }
            if(lis.size()==9){
                sort(lis.begin(), lis.end());
                r_t.push_back(lis[lis.size()/2]);
            }
          
        }
        if(!r_t.empty()){
            tmp.push_back(r_t);
        }
     
    }
    
    for(int i=0;i<tmp.size();i++){
        for(int j=0;j<tmp[i].size();j++){
            if(t<=tmp[i][j]){
                res++;
            }
        }
    }
    
    cout<<res<<"\n";
    
    return 0;
}
