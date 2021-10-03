//
//  프로그래머스_[3차]파일명정렬.cpp
//  algo
//
//  Created by 박효정 on 2021/10/03.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;
struct ve{
    
    string head;
    string num;
    string tale;
    int index;
    
    ve(string a,string b,string c,int d){
        head=a;
        num=b;
        tale=c;
        index=d;
    }
    
    
    bool operator <(const ve &b)const{
        if(head!=b.head){
          
            return head<b.head;
        }else if(stoi(num)!=stoi(b.num)){
           
            return stoi(num)<stoi(b.num);
        }
        else{
           
            return index<b.index;
        }
    }
    
};

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<ve>lis;
    vector<string>h(lis.size());
    for(int i=0;i<files.size();i++){
        string s=files[i];
        string header;
        string number;
        string tail;
        int index;
        for(int j=0;j<s.size();){
            while((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]==' ')||(s[j]=='.')||(s[j]=='-')){
                header+=s[j++];
            }
            while(s[j]>='0'&&s[j]<='9'&&number.size()<5){
                number+=s[j++];
            }
            while(j<s.size()){
                tail+=s[j++];
             
            }
          
        }
        string tmp="";
        h.push_back(header);
        for(int j=0;j<header.size();j++){
            tmp+=tolower(header[j]);
        }
        lis.push_back(ve(tmp,number,tail,i));
    }
    sort(lis.begin(),lis.end());
    
     for(int i=0;i<lis.size();i++){
         string str;

         str=h[lis[i].index]+lis[i].num+lis[i].tale;

       
        answer.push_back(str);
    }
    
    
    return answer;
}
