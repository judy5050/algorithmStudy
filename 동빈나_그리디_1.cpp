//
//  동빈나_그리디_1.cpp
//  algo
//
//  Created by 박효정 on 2021/05/05.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n,k;
queue<pair<int,int>> q;
int ch[100001];
void dfs(int a,int b){
    q.push({a,0});
    int num;
    int cnt;
    while(!q.empty()){
        num=q.front().first;
        cnt=q.front().second;
        if(num==1){
            break;
        }
        q.pop();
        if(ch[num-1]==0){
            q.push({num-1,cnt+1});
        }
        if((num%k==0)&&ch[num/k]==0){
            q.push({num/k,cnt+1});
        }
        
        
        
        
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n>>k;
    
    ch[n]=1;
    dfs(n,k);
    
    cout<<q.front().second<<"\n";
    
    return 0;
}
