//
//  1105.cpp
//  algo
//
//  Created by 박효정 on 2021/10/08.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int  l,r;
    cin>>l>>r;
    
 
    int cnt=0;
    
    string str_l=to_string(l);
    string str_r=to_string(r);
  
    if(str_l.size()!=str_r.size()){
        cnt=0;
    }else{
        for(int i=0;i<str_r.size();i++){
            if(str_l[i]==str_r[i]&&str_l[i]=='8'){
                cnt++;
            }else if(str_l[i]!=str_r[i]){
                break;
            }
        }
    }
   
  
    
    cout<<cnt<<"\n";
    
    return 0;
}
