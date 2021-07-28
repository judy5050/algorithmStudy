//
//  1158.cpp
//  algo
//
//  Created by 박효정 on 2021/07/28.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k;
    cin>>n>>k;
    
    vector<int>v(n);
    queue<int>tmp;
    for(int i=0;i<n;i++){
        tmp.push(i+1);
    }
    
    int cnt=0;
    int index=0;
    queue<int>q;
    while (!tmp.empty()) {
        cnt++;
        if(cnt%k==0){
            q.push(tmp.front());
            tmp.pop();
            index--;
        }else{
            tmp.push(tmp.front());
            tmp.pop();
        }
        index++;
        
        
        
        
        
        
    }
    
    
    cout<<'<';
    while(q.size()>1){
        
        cout<<q.front()<<','<<' ';
        q.pop();
    }
    
    cout<<q.front()<<'>'<<"\n";
    
    return 0;
}
