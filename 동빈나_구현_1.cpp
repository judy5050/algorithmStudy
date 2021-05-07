//
//  동빈나_구현.cpp
//  algo
//
//  Created by 박효정 on 2021/05/07.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    string plans;
    int x=1,y=1;
    
    //L,R,U,D에 따른 방향
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    char moveTypes[4]={'L','R','U','D'};
    
    cin>>n;
    cin.ignore();
    getline(cin, plans);
    
    for(int i=0;i<plans.size();i++){
        char plan=plans[i];
        int nx=0,ny=0;
        for(int j=0;j<4;j++){
            if(plan==moveTypes[j]){
                nx=x+dx[j];
                ny=y+dy[j];
            }
        }
        if(nx<1||ny<1||nx>n||ny>n) continue;
        
        x=nx;
        y=ny;
    }
    cout<<x<<' '<<y<<"\n";
    
    
    return 0;
}
