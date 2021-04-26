//
//  2661.cpp
//  algo
//
//  Created by 박효정 on 2021/04/26.
//
//

#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int n;
bool ch;

bool isvaild(string str){
    
    int len=str.size();
    int ended=str.size()-1;

    for(int i=1;i<=len/2;i++){
        string first=str.substr(ended-i,i);
        string second=str.substr(ended,i);
        if(first.compare(second)==0) return false;
        ended--;
    }
    return true;
}



void dfs(int cnt,string str){
    if(ch==1){
        return;
    }
    if(!isvaild(str)){
        return;
    }
    if(cnt==n){
        cout<<str<<"\n";
        ch=1;
        return;
    }
    dfs(cnt+1,str+'1');
    dfs(cnt+1,str+'2');
    dfs(cnt+1,str+'3');




}

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);



    cin>>n;
    dfs(0,"");





    return 0;
}

