//
//  10814.cpp
//  algo
//
//  Created by 박효정 on 2021/04/28.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct s{
    int age;
    string name;
    int index;

    s(int a,string b,int cn){
        age=a;
        name=b;
        index=cn;
    }

    //오름차순
    bool operator <(const s &b) const{
        if(age!=b.age){
            return age<b.age;
        }
        else{
            return index<b.index;
        }
        
    }
};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    vector<s> v;
    int age;
    string name;
    for(int i=0;i<n;i++){
        cin>>age>>name;
        v.push_back(s(age,name,i));
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].age<<' '<<v[i].name<<"\n";
    }
    
    
    
    
    return 0;
}
