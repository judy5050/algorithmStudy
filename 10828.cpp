//
//  10828.cpp
//  algo
//
//  Created by 박효정 on 2021/07/29.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    queue<char>q;
    stack<int>s;
    int index=0;
    int num=1;
    while(index<v.size()&&num<=n+1){
        if(num==v[index]){
            index++;
            s.push(num);
            s.pop();
            q.push('+');
            q.push('-');
            num++;
    
        }
        else if(!s.empty()&&v[index]==s.top()){
            q.push('-');
            index++;
            s.pop();
            
        }else{
            s.push(num);
            q.push('+');
            num++;
        }
        
        
        
        
        
        
    }
    
    if(!s.empty()||index!=v.size()||num!=n+1){
        cout<<"NO"<<"\n";
    }else{
        while(!q.empty()){
            
            cout<<q.front()<<"\n";
            q.pop();
        }
    }
    
    
    
    return 0;
}
