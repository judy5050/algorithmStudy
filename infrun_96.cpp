//
//  infrun_96.cpp
//  algo
//
//  Created by 박효정 on 2021/04/20.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct brick{
    
    int s,h,w;
    brick(int a,int b,int c){
        s=a;
        h=b;
        w=c;
    }
    bool operator <(const brick &b) const{
        return s>b.s;
    }
    
    
};


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,a,b,c,max_h,res=0;
    
    cin>>n;
    
    vector<brick> bricks;
    vector<int> dy(n,0);
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        bricks.push_back(brick(a,b,c));
    }
    sort(bricks.begin(), bricks.end());
    dy[0]=bricks[0].h;
    res=dy[0];
    
    
    for(int i=1;i<n;i++){
        max_h=0;
        for(int j=i-1;j>=0;j--){
            if(bricks[j].w>bricks[i].w&&dy[j]>max_h){
                max_h=dy[j];
            }
        }
        dy[i]=max_h+bricks[i].h;
        res=max(res,dy[i]);
    }
    
    
    
    
    cout<<res<<"\n";
    
    return 0;
}
