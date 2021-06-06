#include <string>
#include <vector>
#include <iostream>
using namespace std;

int check(int num){
    if(num==6){
        return 1;
    }
    else if(num==5){
       return 2;
    }
    else if(num==4){
        return 3;
    }
    else if(num==3){
       return 4;
    }
    else if(num==2){
        return 5;
    }
    else{
       return 6;
    }
    
    
}


vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    //0개수 카운트
    int cnt=0;
    //로또 당첨번호화 로또 구매 번호 일치 횟수
    int res=0;
    int high=0;
    for(int i=0;i<lottos.size();i++){
        for(int j=0;j<lottos.size();j++){
            if(lottos[i]==win_nums[j]){
                res++;
            }
        }
         if(lottos[i]==0){
                cnt++;
        }
       
    }
    
    answer.push_back(check(res+cnt));
    answer.push_back(check(res));
    
    
    return answer;
}
