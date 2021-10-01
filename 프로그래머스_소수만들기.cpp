//
//  프로그래머스_소수만들기.cpp
//  algo
//
//  Created by 박효정 on 2021/10/01.
//

#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

vector<bool> check(3001);
vector<int>v;
int cnt=0;
vector<int>lis;
void dfs(int n,int end){
    
    if(n>=end||v.size()==3){
        if(v.size()==3){
            int sum=lis[v[0]]+lis[v[1]]+lis[v[2]];
            if(check[sum]==true){
                cnt++;
            }
        }
       
        
        return;
    }
    
    v.push_back(n);
    dfs(n+1,end);
    v.pop_back();
    dfs(n+1,end);
    
}


int solution(vector<int> nums) {
    int answer = -1;
    lis=nums;
    
    fill(check.begin(),check.end(),true);
    
    //소수 아닌 수 false로 변경하기
    for(int i=2;i<=sqrt(3000);i++){
       
        if(check[i]==true){
             int j=2;
            while(i*j<=3000){
                check[i*j]=false;
                j+=1;
            }
        }
    }
    
    dfs(0,nums.size());
    
    answer=cnt;
    

    return answer;
}
