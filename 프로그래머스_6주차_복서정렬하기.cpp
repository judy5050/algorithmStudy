//
//  프로그래머스_6주차_복서정렬하기.cpp
//  algo
//
//  Created by 박효정 on 2021/09/09.
//

#include <iostream>
#include <algorithm>
#include <queue>


using namespace std;


struct qu{
    //복서 번호
    int index;
    //몸무게
    int weight;
    //자기보다 무거운 복서 이긴 수
    int cnt;
    //승률
    double val;
    
    qu(int a,int b,int c,double d){
          index=a;
          weight=b;
          cnt=c;
          val=d;
      }
    
    
    bool operator<(const qu & b) const{
            
            //승률 동일
            if(val==b.val){
                if(cnt==b.cnt){
                    if(weight==b.weight){
                        return index>b.index;
                    }else{
                        return weight<b.weight;
                    }
                }else{
                    return cnt<b.cnt;
                }
            }else{
              
                return val<b.val;
            }
            
              
        }
    
    
};





int main(){
    
    vector<int> weights;
    vector<string> head2head;
    vector<int> answer((int)weights.size());
    
    
    weights.push_back({60});
    weights.push_back({70});
    weights.push_back({60});
//    weights.push_back({120});
    
    head2head.push_back({"NNN"});
    head2head.push_back({"NNN"});
    head2head.push_back({"NNN"});
//    head2head.push_back({"WWLN"});
    
    
    priority_queue<qu>pq;
    
    
    
       //승률계산
       for(int i=0;i<head2head.size();i++){
           //붙어본 경기수
           double num=0;
           int win=0;
           //나보다 무거운 선수 이긴 수
           int wei_win=0;
           string tmp=head2head[i];
           for(int j=0;j<tmp.size();j++){
               if(tmp[j]=='W'){
                   if(weights[i]<weights[j]){
                       wei_win++;
                   }
                   num++;
                   win++;
               }else if(tmp[j]=='L'){
                   num++;
               }
           }
//           cout<<(win/num);
           double val=(win/num)*100;
           pq.push(qu(i,weights[i],wei_win,val));
       }
       
       //선수들 등수 확인
       int rank=1;
       
    vector<int>r(weights.size());
       while(!pq.empty()){
           int person=pq.top().index+1;
           answer.push_back(person);
//           rank++;
           pq.pop();
           
       }
       
//   for(int i=0;i<r.size();i++){
//       answer.push_back(r[i]);
//   }
//
    for(int i=0;i<r.size();i++){
        cout<<answer[i]<<' ';
    }
           
    cout<<"\n";
    
    
    
    
    return 0;
}



