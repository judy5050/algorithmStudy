//
//  프로그래머스_상호평가.cpp
//  algo
//
//  Created by 박효정 on 2021/09/07.
//

#include <string>
#include <vector>

using namespace std;

string solution(vector<vector<int>> scores) {
    string answer = "";
    
    bool chm=true;
    bool chn=true;
    int cmp=0;
    int sum=0;
    vector<int>v;
    for(int i=0;i<scores.size();i++){
        cmp=scores[i][i];
        chm=true;
        chn=true;
        for(int j=0;j<scores[i].size();j++){
            if(i!=j&&cmp<=scores[j][i]){
                chn=false;
                //유일한 최저점이 아닌경우
            }if(i!=j&&cmp>=scores[j][i]){
                chm=false;
            }
        }
        if(chn==true||chm==true){
           scores[i][i]=-1;
        }
    }
    
    for(int i=0;i<scores.size();i++){
         sum=0;
         bool ch=false;
        for(int j=0;j<scores.size();j++){
            if(scores[j][i]!=-1){
                sum+=scores[j][i];
            }else{
                ch=true;
            }
        }
        if(ch==false){
            v.push_back(sum/scores.size());
        }else{
             v.push_back(sum/(scores.size()-1));
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(v[i]>=90){
            answer+='A';
        }else if(v[i]<90&&v[i]>=80){
               answer+='B';
        }else if(v[i]<80&&v[i]>=70){
               answer+='C';
        }else if(v[i]<70&&v[i]>=50){
               answer+='D';
        }else{
               answer+='F';
        }
    }
    
    
    
    return answer;
}
