//
//  프로그래머스_N개의최소공배수.cpp
//  algo
//
//  Created by 박효정 on 2021/10/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using namespace std;

int GCD(int num1,int num2){
    if(num2==0){
        return num1;
    }else{
        return GCD(num2,num1%num2);
    }
   
}

int LCM(int num1,int num2){
    return (num1*num2)/GCD(num1,num2);
}



int solution(vector<int> arr) {
    int answer = 0;
    int lcm;
    for(int i=1;i<arr.size();i++){
        if(i==1){
           lcm=LCM(arr[0],arr[1]);
            continue;
        }
            lcm=LCM(lcm,arr[i]);
        
        
        
    }
    
    answer=lcm;
    
    return answer;
}
