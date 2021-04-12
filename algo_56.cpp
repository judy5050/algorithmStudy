//
//  algo_56.cpp
//  algo
//
//  Created by 박효정 on 2021/04/12.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int tmp;
stack<int>s;

void recur(int x){
    if(x==0) return ;
    
    else{
        recur(x-1);
        cout<<x<<" ";
    }
    
}


int main(){
    
  
    int n;
    cin>>n;
    
    recur(n);
    
    cout<<"\n";
    
    return 0;
}
