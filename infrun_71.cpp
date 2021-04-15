//
//  infrun_71.cpp
//  algo
//
//  Created by 박효정 on 2021/04/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int ch[10001],d[3]={1,-1,5};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int s,e,x,pos;
    queue<int>q;
    cin>>s>>e;
    ch[s]=1;
    q.push(s);
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(int i=0;i<3;i++){
            pos=x+d[i];
            if(pos<=0||pos>10000) continue;
            if(pos==e){
                cout<<ch[x]<<"\n";
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos]=ch[x]+1;
                q.push(pos);
            }
        }
        
        
    }
    
    
    
    
    
    
    return 0;
}
