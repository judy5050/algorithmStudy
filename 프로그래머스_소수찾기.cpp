//
//  프로그래머스_소수찾기.cpp
//  algo
//
//  Created by 박효정 on 2021/07/07.
//

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

vector<int> arr(10000000,true);

int solution(string numbers) {
    int answer = 0;
     vector<string>lis;
    sort(numbers.begin(),numbers.end());
     do{
        for(int i=1;i<=numbers.size();i++){
            string s="";
            s=numbers.substr(0,i);
            lis.push_back(s);
        }
       
     }while(next_permutation(numbers.begin(),numbers.end()));
     
    
    
     for(int i=2;i<=(int)sqrt(10000000);i++){
         if(arr[i]==true){
             // i를 제외한 i의 모든 배수를 지우기
             int j = 2;
             while (i * j < 10000000) {
                 arr[i * j] = false;
                 j += 1;
             }
         }
     }
     
     for(int i=0;i<lis.size();i++){
         if(stoi(lis[i])!=0&&stoi(lis[i])!=1&&arr[stoi(lis[i])]==true){
             answer++;
             arr[stoi(lis[i])]=false;
         }
     }
    
    
    
    
    
    return answer;
}
       
    return 0;
}
