//
//  프로그래머스_디스크컨트롤러.cpp
//  algo
//
//  Created by 박효정 on 2021/07/15.
//

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

struct qu {
    
    int start;
    int t;
    
  
    qu(int a,int b){
        start=a;
        t=b;
        
    }
    
    bool operator <(const qu& b)const{
        return t>b.t;
    }
    
};





int solution(vector<vector<int>> jobs) {
    int answer = 0;
    
    
      priority_queue<qu>q;
    
    
    sort(jobs.begin(), jobs.end());
    int index=0;
    int res=0;
    int t=0;

    while(1){
         
            while(index<jobs.size()&&t>=jobs[index][0]){
                q.push(qu(jobs[index][0],jobs[index][1]));
                index++;
            }
            
          
       
        if(!q.empty()){
                t+=q.top().t;
                res+=t-q.top().start;
                q.pop();
              
            
          
        }else {
            t = jobs[index][0];
        }

       
        if(index>=jobs.size()){
            break;
        }
        
        
    }
    
    while(!q.empty()){
        
        t+=q.top().t;
        res+=t-q.top().start;
        q.pop();
      
        
    }
    
    answer=res/(int)jobs.size();
    
 
    
    return answer;
}

