//
//  algo_101.cpp
//  algo
//
//  Created by 박효정 on 2021/04/20.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct s{
    int num;
    int time;
    
    s(int a,int b){
        num=a;
        time=b;
    }
    
    //오름차순
    bool operator <(const s &b) const{
        return time<b.time;
    }
};


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;//문제의 수 , 제한 시간
    cin>>n>>m;
  
    //오름차 정렬
    vector<s> v;
    int a,b;
    vector<int> dy(m+1,0);
    //값 입력
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(s(a,b));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0;i<n;i++){
        for(int j=m;j>=v[i].time;j--){
            dy[j]=max(dy[j],dy[j-v[i].time]+v[i].num);
        }
    }
    
    cout<<dy[m]<<"\n";
    
    
    return 0;
}
