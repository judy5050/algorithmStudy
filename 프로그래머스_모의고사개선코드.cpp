//
//  프로그래머스_모의고사개선코드.cpp
//  algo
//
//  Created by 박효정 on 2021/06/06.
//
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int res;
int cnt1;
int cnt2;
int cnt3;
int m=-100000;
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,1,2,3,2,4,2,5,2,1};
    int arr3[]={3,3,1,1,2,2,4,4,5,5,3,3};


    for(int i=0;i<answers.size();i++){
        if(answers[i]==arr1[i%5])
        {
            cnt1++;
        }
        if(answers[i]==arr2[i%8])
        {
            cnt2++;
        }
        if(answers[i]==arr3[i%10])
        {
            cnt3++;
        }
    }

    if(m<cnt1){
        m=cnt1;
    }
    if(m<cnt2){
        m=cnt2;
    }
    if(m<cnt3){
        m=cnt3;
    }

    if(m==cnt1){
       answer.push_back(1);
    }
    if(m==cnt2){
       answer.push_back(2);
    }
    if(m==cnt3){
       answer.push_back(3);
    }


    return answer;
}
