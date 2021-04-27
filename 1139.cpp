//
//  1139.cpp
//  algo
//
//  Created by 박효정 on 2021/04/27.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio();
    
    
    int n;
    cin>>n;
    vector<int>v(n);
    
    int res=0;
    //값 입력
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    //오름차 정렬
    sort(v.begin(), v.end());
    
    for(int i=0;i<n;i++){
        //내가 인출할때 걸리는 시간 더하기
        res+=v[i];
        for(int j=0;j<i;j++){
            //앞 사람 인출 값 더하기
            res+=v[j];
        }
    }
    
    cout<<res<<"\n";
    
    return 0;
}
