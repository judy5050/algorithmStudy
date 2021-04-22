//
//  5014.cpp
//  algo
//
//  Created by 박효정 on 2021/04/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

queue<pair<int,int>>q;
vector<int> dir;
int comfirm;
int res=2147000000;
int ch[1000001];
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int f,s,g,u,d;
    
    cin>>f>>s>>g>>u>>d;
    dir.push_back(u);
    dir.push_back(-d);
    //시작점을 넣음,처음 움직인 카운트 수는 0
    q.push({s,0});
    int x;
    int val=0;
    while(!q.empty()){
        
        x=q.front().first;
        val=q.front().second;
        int nx;
        q.pop();
        
        //목표 지점 도착시 종료
        if(x==g){
            comfirm=1;
            break;
        }
        for(int i=0;i<2;i++){
            nx=x+dir[i];
            if(ch[nx]==0&&nx<=f&&nx>=1){
                q.push({nx,val+1});
                ch[nx]=1;
            }
        }
        
        
    }
    if(comfirm==1){
        cout<<val<<"\n";
        
    }
    else{
        cout<<"use the stairs"<<"\n";
    }
    
    
    return 0;
}
