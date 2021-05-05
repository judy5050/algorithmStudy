
  14465.cpp
  algo

  Created by 박효정 on 2021/05/05.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k,b;
    int res=2147000000;
    int num=0;
    int cnt=0;
    cin>>n>>k>>b;
    vector<int>v(100000);
    //입력
    int a;
    for(int i=0;i<b;i++){
        cin>>a;
        v[a]=1;
        
    }
    int i=1;
    int index=1;
    while(1){
        if(i+k<=index){
            i++;
            index=i;
            cnt=0;
            num=0;
        }
        if(i+k>n+1)
            break;
        //정상 신호등
        if(v[index]==0){
            cnt++;
            
        }
        //비정상
        else if(v[index]==1){
            cnt++;
            num++;
        }
        index++;
        if(cnt>=k){
            res=min(res,num);
        }
        
    }
    
    cout<<res<<"\n";
    
    
    return 0;
}
