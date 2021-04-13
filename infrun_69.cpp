//
//  infrun_69.cpp
//  algo
//
//  Created by 박효정 on 2021/04/14.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int q[100],front=-1,back=-1,ch[10];

vector<int> map[10];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int i,a,b,x;
    
    for(i=1;i<=6;i++){
        cin>>a>>b;
        map[a].push_back(b);
        map[b].push_back(a);
    }
    
    q[++back]=1;
    ch[1]=1;
    while(front<back){
        x=q[++front];
        cout<<x<<" ";
        for(i=0;i<map[x].size();i++){
            if(ch[map[x][i]]==0){
                ch[map[x][i]]=1;
                q[++back]=map[x][i];
            }
        }
        
    }
    
    
    cout<<"\n";
    
    
    return 0;
}
