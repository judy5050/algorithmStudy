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
    int arr1[10001];
    int arr2[10001];
    int arr3[10001];

    for(int i=0;i<answers.size();i++){
        if(i%5==0){
            arr1[i]=1;
        }
        else if(i%5==1){
            arr1[i]=2;
        }
        else if(i%5==2){
            arr1[i]=3;
        }
        else if(i%5==3){
            arr1[i]=4;
        }
        else if(i%5==4){
            arr1[i]=5;
        }

    }

    for(int i=0;i<answers.size();i++){
        if(i%8==0){
            arr2[i]=2;
        }
        else if(i%8==1){
            arr2[i]=1;
        }
        else if(i%8==2){
            arr2[i]=2;
        }
        else if(i%8==3){
            arr2[i]=3;
        }
        else if(i%8==4){
            arr2[i]=2;
        }
        else if(i%8==5){
            arr2[i]=4;
        }
        else if(i%8==6){
            arr2[i]=2;
        }
        else if(i%8==7){
            arr2[i]=5;
        }

    }

        for(int i=0;i<answers.size();i++){
        if(i%10==0){
            arr3[i]=3;
        }
        else if(i%10==1){
            arr3[i]=3;
        }
        else if(i%10==2){
            arr3[i]=1;
        }
        else if(i%10==3){
            arr3[i]=1;
        }
        else if(i%10==4){
            arr3[i]=2;
        }
        else if(i%10==5){
            arr3[i]=2;
        }
        else if(i%10==6){
            arr3[i]=4;
        }
        else if(i%10==7){
            arr3[i]=4;
        }
        else if(i%10==8){
            arr3[i]=5;
        }
        else if(i%10==9){
            arr3[i]=5;
        }


    }

    for(int i=0;i<answers.size();i++){
        if(answers[i]==arr1[i])
        {
            cnt1++;
        }
        if(answers[i]==arr2[i])
        {
            cnt2++;
        }
        if(answers[i]==arr3[i])
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
