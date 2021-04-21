//
//  algo_103.cpp
//  algo
//
//  Created by 박효정 on 2021/04/21.
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
    
    //이차원 배열을 만들고 100 으로 값을 초기화 함
    vector<vector<int>> v(n+1,vector<int>(n+1,100));
    vector<int> res(n+1);
    vector<int> member;
    int a,b;
    int count=0;
    int low=2147000000;
    
    while(1){
        
        cin>>a>>b;
        if(a==-1&&b==-1){
            break;
        }
        //a->b 친구 ,b->a 친구
        v[a][b]=1;
        v[b][a]=1;
    }
    
    
    for(int i=1;i<=n;i++){
        v[i][i]=0;
    }
    
    
    
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(v[i][j]>v[i][k]+v[k][j]){
//                    cout<<v[k][j]<<" ";
                    v[i][j]=v[i][k]+v[k][j];
                   
                }
            }
        }
    }
   
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //각 행의 최대값 구함
            res[i]=max(res[i],v[i][j]);
        }
    }
    
    for(int i=1;i<=n;i++){
        low=min(low,res[i]);
    }
    
    for(int i=1;i<=n;i++){
        if(low==res[i]){
            count++;
            member.push_back(i);
        }
    }
    
    cout<<low<<" "<<count<<"\n";
    for(int i=0;i<member.size();i++){
        cout<<member[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
