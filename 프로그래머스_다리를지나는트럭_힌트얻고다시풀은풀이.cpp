//
//  프로그래머스_다리를지나는트럭_힌트얻고다시풀은풀이.cpp
//  algo
//
//  Created by 박효정 on 2021/07/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int bridge_length=100;
    int weight=100;
    int answer=0;
    vector<int> truck_weights;
    
//    truck_weights.push_back(7);
//    truck_weights.push_back(4);
//    truck_weights.push_back(5);
//    truck_weights.push_back(6);
    truck_weights.push_back(10);
    queue<int>q;
    for(int i=0;i<bridge_length;i++){
        q.push(0);
    }
    int tim=0;
    int total=0;
    int index=0;
    while(!q.empty()){
        
        total-=q.front();
        q.pop();
        tim++;
        if(index>=truck_weights.size()){
            continue;
        }
        if(total+truck_weights[index]<=weight){
            total+=truck_weights[index];
            q.push(truck_weights[index++]);
           
        }else{
            q.push(0);
        }
       
        
        
        
        
        
        
    }
    
    
    
    
    answer=tim;
    cout<<answer<<"\n";
    
    
    
    return 0;
}
