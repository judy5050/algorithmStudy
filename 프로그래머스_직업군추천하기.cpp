//
//  프로그래머스_직업군추천하기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/08.
//

#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>


using namespace std;

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    
        vector<string>g;
    vector<pair<string,int>>val[5];
    
    //주어진 점수 테이블 직군, 각 점수 쪼개어 저장
    for(int i=0;i<table.size();i++){
        
        string tmp=table[i];
        int len=0;
        int start=0;
        int cnt=5;
        for(int j=0;j<table[i].size();j++){
            len++;
            if(tmp[j]==' '){
                if(start==0){
                    g.push_back(tmp.substr(start,len-1));
                    start=j+1;
                    len=0;
                }else{
                    val[i].push_back({tmp.substr(start,len-1),cnt});
                    cnt--;
                    start=j+1;
                    len=0;
                }
            }
            
           
            
        }
        val[i].push_back({tmp.substr(start,len),cnt});
        
    }
    
    vector<pair<int,int>>cmp;
    for(int i=0;i<table.size();i++){
        int sum=0;
        for(int k=0;k<languages.size();k++){
            for(int j=0;j<5;j++){
//                cout<<val[i][j].first<<' '<<languages[k]<<"\n";
                if(val[i][j].first==languages[k]){
                    
                    sum+=val[i][j].second*preference[k];
                }
            }
           
        }
       
        cmp.push_back({sum,i});
    }
    
    
    
    sort(cmp.begin(), cmp.end(),greater<>());
    vector<int>index;
    for(int i=0;i<cmp.size()-1;i++){
        if(cmp[i].first!=cmp[i+1].first){
            index.push_back(cmp[i].second);
            break;
        }else{
            index.push_back(cmp[i].second);
            index.push_back(cmp[i+1].second);
        }
    }
    
    vector<string>res;
    for(int i=0;i<index.size();i++){
        res.push_back(g[index[i]]);
    }
    sort(res.begin(), res.end());
    
    answer=res[0];
  
    
    return answer;
}
