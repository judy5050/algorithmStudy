//
//  infrun_53.cpp
//  algo
//
//  Created by 박효정 on 2021/04/11.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int stack[100],top=-1;

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,k;
    
    char str[20]="0123456789ABCDEF";
    
    cin>>n>>k;
    
    while(n>0){
        push(n%k);
        n=n/k;
        
    }
    
    while(top!=-1){
        cout<<str[pop()];
    }
    
    
    cout<<"\n";
    
    
    
    
    
    
    return 0;
}
