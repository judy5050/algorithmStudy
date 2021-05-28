//
//  2493.cpp
//  algo
//
//  Created by 박효정 on 2021/05/28.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

struct st{
    
    int index,val;
    
    
    
};


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    stack<st>s;
    int a;
   
    

    vector<int> res(n+1);
    stack<st>tmp;
    for(int i=1;i<=n;i++){
        cin>>a;
        while(!s.empty()){
            if(a<s.top().val){
                cout<<s.top().index<<" ";
                break;
            }
            s.pop();
            
        }
        if(s.empty()) cout<<0<<" ";
        s.push({i,a});
    }
   
    cout<<"\n";
    
    
    
    
    return 0;
}
