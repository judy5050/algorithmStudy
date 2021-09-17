//
//  16171.cpp
//  algo
//
//  Created by 박효정 on 2021/09/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    
    string s1,s2;
    cin>>s1>>s2;
    map<string,int>m;
    string tmp="";
    for(int i=0;i<s1.size();i++){
        if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z')){
            tmp+=s1[i];
          
            
        }
    }
   
    for(int i=0;i<tmp.size();i++){
        string s="";
        for(int j=i;j<tmp.size();j++){
            s+=tmp[j];
            m[s]=1;
        }
    }
    
    if(m[s2]==1){
        cout<<1<<"\n";
    }else{
        cout<<0<<"\n";
    }
    
    
    
    return 0;
}
