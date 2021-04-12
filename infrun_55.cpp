//
//  algo_55_1.cpp
//  algo
//
//  Created by 박효정 on 2021/04/12.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>


using namespace std;

vector<char> str;
int cnt;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    stack<int>s;
    
    int i,j=1,n,m;
    cin>>n;
    
    vector<int>a(n+1);
    for(i=1;i<=n;i++){
        a[i]=i;
    }
    
    vector<char> str;
    for(i=1;i<=n;i++){
        cin>>m;
        s.push(m);
        str.push_back('P');
        while(1){
            if(s.empty()) break;
            if(s.top()==a[j]){
                s.pop();
                j++;
                str.push_back('O');
            }
            else break;
        
        }
        
    }
    if(!s.empty()) cout<<"impossible"<<"\n";
    else{
        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }
    }
    cout<<"\n";
    
    return 0;
}
