//
//  1620.cpp
//  algo
//
//  Created by 박효정 on 2021/07/31.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    map<int, string> mai;
    map<string,int>mas;
    int n,m;
    cin>>n>>m;
    string name;
    for(int i=1;i<=n;i++){
        cin>>name;
        mai.insert({i,name});
        mas.insert({name,i});
        
    }
    
    string input;
    for(int i=0;i<m;i++){
        cin>>input;
        if('A'<=input[0]&&'Z'>=input[0]){
            auto index= mas.find(input);
            cout<<index->second<<"\n";
         
          
        }else{
            auto index=mai.find(stoi(input));
            cout<<index->second<<"\n";
           
        }
    }
    
    
    
    
    return 0;
}
