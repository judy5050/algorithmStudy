//
//  17413.cpp
//  algo
//
//  Created by 박효정 on 2021/08/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>



using namespace std;

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    string s;
    //공백 포함 문자열 입력하기 위해
    getline(cin, s);
    vector<pair<int,pair<int, int>>>v;
    int start=0;
    for(int i=0;i<s.size();){
        start=i;
        bool ch=false;
        //단어 일 경우
        if(s[i]!='<'&&s[i]!=' '){
            while(i<s.size()&&s[i]!=' '&&s[i]!='<'){
                i++;
                
            }
            ch=true;
            //맨 앞값이 단어 유무 확인
            //start 가 단어 시작 i가 단어 끝
            v.push_back({ch,{start,i-1}});
            //단어 다음 공백인 경우 또 단어가 들어옴
        }else if(s[i]==' '){
            ch=true;
            i++;
            start=i;
            while(i<s.size()&&s[i]!=' '&&s[i]!='<'){
                i++;
                
            }
            ch=true;
            //맨 앞값이 단어 유무 확인
            //start 가 단어 시작 i가 단어 끝
            v.push_back({ch,{start,i-1}});
            //단어 다음 공백인 경우 또 단어가 들어옴
        }else{
            start=i;
            while(i<s.size()&&s[i]!='>'){
                
                i++;
            }
            v.push_back({ch,{start,i}});
            i++;
            
            
            
        }
        
        
        
        
        
    }
    
    
    for(int i=0;i<v.size();i++){
        //맨 처음 값인경우 공백 생략
        if(i==0){
            //단어인 경우 반대 출력
            if(v[i].first==1){
                for(int j=v[i].second.second;j>=v[i].second.first;j--){
                    cout<<s[j];
                }
            }else{
                for(int j=v[i].second.first;j<=v[i].second.second;j++){
                    cout<<s[j];
                }
            }
            
            //단어가 아닐경우
        }else if(v[i].first==0){
            for(int j=v[i].second.first;j<=v[i].second.second;j++){
                cout<<s[j];
            }
        }else{
            if(v[i-1].first==1){
                cout<<' ';
            }
           
            for(int j=v[i].second.second;j>=v[i].second.first;j--){
                cout<<s[j];
            
            }
        }
        
        
        
        
    }
    
    cout<<"\n";
    
    
    
    return 0;
}
