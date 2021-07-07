//
//  프로그래머스_뉴스클러스터링.cpp
//  algo
//
//  Created by 박효정 on 2021/07/05.
//

#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    vector<string>s1;
    vector<string>s2;
    
    for(int i=0;i<str1.size();i++){
        string tmp="";
        for(int j=i;j<i+2;j++){
            if((str1[j]>='a'&&str1[j]<='z')){
                tmp+=str1[j]-32;
            }
            else if(str1[j]>='A'&&str1[j]<='Z'){
                tmp+=str1[j];
            }
        }
        if(tmp.size()==2){
            s1.push_back(tmp);
        }
        
    }
    
    for(int i=0;i<str2.size();i++){
        string tmp="";
        for(int j=i;j<i+2;j++){
            if((str2[j]>='a'&&str2[j]<='z')){
                tmp+=str2[j]-32;
            }
            else if(str2[j]>='A'&&str2[j]<='Z'){
                tmp+=str2[j];
            }
        }
        if(tmp.size()==2){
            s2.push_back(tmp);
        }
        
    }
    
    int ch=0;
    
  
    
    int index1=0;
    int index2=0;
    //교집합 수
    int cop=0;
    int sum=(int)s1.size()+(int)s2.size();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i].compare(s2[j])==0){
                cop++;
                s1[i]="*";
                s2[j]='*';
            }
        }
    }
    
    if(sum-cop==0){
        answer=65536;
    }
    else{
        answer=cop/((double)(sum-cop))*65536;
    }
    
    
    return answer;
}
