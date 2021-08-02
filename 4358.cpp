////
////  4358.cpp
////  algo
////
////  Created by 박효정 on 2021/08/02.
////
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){


    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    string str="";
    map<string,int>m;
    int cnt=0;
    while(getline(cin,str)){
        cnt++;
        if(m.find(str)!=m.end()){
            m[str]++;
        }else{
            m[str]=1;
        }
    }

    cout<<fixed;
    cout.precision(4);
    
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<(i->second/(double)cnt)*100<<"\n";




    }





    return 0;
}


