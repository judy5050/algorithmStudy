//
//  algo_71.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>


using namespace std;

int ch[15000];
int num[15000];
int n,m;
int cnt;
queue<int> q;
int dir[3]={-1,1,5};
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n>>m;
    q.push(n);
    ch[n]=1;
    while(!q.empty()){
        int x,mx;
        x=q.front();
        q.pop();
        if(x==m){
            break;
        }
        for(int i=0;i<3;i++){
            
            mx=x+dir[i];
            if(mx>0&&mx<=10000)
                if(ch[mx]==0){
                    ch[mx]=1;
                    num[mx]=num[x]+1;
                    q.push(mx);
                }
            
        }
    }
    
    
    cout<<num[m]<<"\n";
    
    return 0;
}
