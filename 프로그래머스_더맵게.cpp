#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

struct qu{
    
    int score;
    
    qu(int a){
        score=a;
    }
    bool operator<(const qu & b) const{
        return score>b.score;
    }
    
    
};


int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<qu> pq;
    
    for(int i=0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    
    while(!pq.empty()&&pq.top().score<K){
        int first;
        int second;
        int make;
        
        
        first=pq.top().score;
        pq.pop();
        
        //뒤에 뺄 수가 없다면
        if(pq.empty()){
            pq.push(first);
            break;
        }
        second=pq.top().score;
        pq.pop();
        
        make=(first+second*2);
        pq.push(make);
        answer++;
    }
    
    if(answer==0||pq.top().score<K){
        answer=-1;
    }
    return answer;
}
