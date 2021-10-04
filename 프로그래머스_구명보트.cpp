//
//  프로그래머스_구명보트.cpp
//  algo
//
//  Created by 박효정 on 2021/10/04.
//

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int rt=people.size()-1;
    int lt=0;
    sort(people.begin(),people.end());
    while(lt<=rt){
        if(people[rt]!=-1&&people[lt]!=-1&&people[lt]+people[rt]<=limit){
            people[lt]=-1;
            people[rt]=-1;
            answer++;
            lt++;
            rt--;
          
        }else{
            if(people[rt]!=-1){
                people[rt]=-1;
                answer++;
            }
          
            rt--;
          
        }
        
        
        
    }
    return answer;
}
