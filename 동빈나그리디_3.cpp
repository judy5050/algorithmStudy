//
//  동빈나그리디_3.cpp
//  algo
//
//  Created by 박효정 on 2021/05/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    
    int res=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=1;
        if(cnt>=arr[i]){
            res+=1;
            cnt=0;
        }
    }
    cout<<res<<"\n";
    return 0;
}
