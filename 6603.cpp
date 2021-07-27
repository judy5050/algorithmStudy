//
//  6603.cpp
//  algo
//
//  Created by 박효정 on 2021/07/27.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string>res;
int k;
vector<string>v;
void dfs(int index,string str,int cnt){
    if(cnt==6){
        if(cnt==6){
            res.push_back(str);
        }
        return;
    }else if(index<v.size()){
     
        if(str==""){
            dfs(index+1,str+v[index],cnt+1);
            dfs(index+1,str,cnt);
        }else{
            dfs(index+1,str+' '+v[index],cnt+1);
            dfs(index+1,str,cnt);
        }
       
    }
    
    
    
}

void init(){

    res.clear();
    v.clear();
    
}
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
  
    while(1){
        string c;
        cin>>k;
        if(k==0){
            break;
        }
        for(int i=0;i<k;i++){
            cin>>c;
            v.push_back(c);
        }

        dfs(0,"",0);

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<"\n";
        }
        cout<<"\n";
        init();

    }

   
    
    
    
    
    return 0;
}
