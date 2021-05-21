//
//  1181.cpp
//  algo
//
//  Created by 박효정 on 2021/05/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//구초제
struct a{
    
    string s;
  
    a(string ss){
        s=ss;
    }
    bool operator <(const a & b)const{
        if(s.size()==b.s.size()){
            return s<b.s;
        }
        else {
            return s.size()<b.s.size();
        }
     
    }
    
    
    
};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
   
    //입력받을 단어의 수
    int cnt;
    cin>>cnt;
    vector<a> v;
    //입력받을 문자열
    string sub;
    for(int i=0;i<cnt;i++){
        cin>>sub;
        v.push_back(a(sub));
      
      
    }
    //구조체에서 정의한것을 기준으로 정렬
    sort(v.begin(), v.end());
    //같은 문자열 생략하기 위해
    string tmp="";
    //문자열 출력 
    for(int i=0;i<cnt;i++){
        if(tmp==v[i].s)
            continue;
        cout<<v[i].s<<"\n";
        tmp=v[i].s;
    }
    
    
    
    
    
    return 0;
}
