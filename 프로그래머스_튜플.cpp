//
//  프로그래머스_튜플.cpp
//  algo
//
//  Created by 박효정 on 2021/07/12.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;




int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    string s="{{1,2,3},{2,1},{1,2,4,3},{2}}";
    vector<int>answer;
    vector<pair<int, string>>v;
    vector<int>t;
    vector<int>cmp[501];
    int index=1;
    for(int i=1;i<s.size()-2;i++){
        string tmp="";
        if(s[i]=='{'){
            while(s[++i]!='}'){
                if(s[i]!=','){
                    tmp+=s[i];
                }else if(!tmp.empty()&&s[i]==','){
                    cmp[index].push_back(stoi(tmp));
                    tmp="";
                }
            }
            
        }
        if(!tmp.empty()){
            cmp[index].push_back(stoi(tmp));
        }
        index++;
       
        

    }
    vector<pair<int, int>>res;
    for(int i=1;i<501;i++){
        for(int j=0;j<cmp[i].size();j++){
            res.push_back({cmp[i].size(),cmp[i][j]});
        }
    }
  
    
   
    sort(res.begin(), res.end());
    int arr[100001];
    fill(arr, arr+100001, 0);
  
            for(int j=0;j<res.size();j++){
                if(arr[res[j].second]==0){
                    answer.push_back(res[j].second);
                    arr[res[j].second]=1;
                                    
                }
            }
        
    
   
    
    
    
    
    
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<' ';
    }
    cout<<"\n";
    return 0;
}
