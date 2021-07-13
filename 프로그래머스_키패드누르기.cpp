//
//  프로그래머스_키패드누르기.cpp
//  algo
//
//  Created by 박효정 on 2021/07/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

struct ve{
    int num;
    int xpos;
    int ypos;
    
    ve(int a,int b,int c){
        num=a;
        xpos=b;
        ypos=c;
    }
    bool operator <(const ve& b) const{
        return num<b.num;
    }
    
    
};



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    vector<int> numbers;
    string hand="left";
    string answer = "";
    
//    [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]
//    [7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]
//    numbers.push_back(1);
//    numbers.push_back(3);
//    numbers.push_back(4);
//    numbers.push_back(5);
//    numbers.push_back(8);
//    numbers.push_back(2);
//    numbers.push_back(1);
//    numbers.push_back(4);
//    numbers.push_back(5);
//    numbers.push_back(9);
//    numbers.push_back(5);
    
//    numbers.push_back(7);
//    numbers.push_back(0);
//    numbers.push_back(8);
//    numbers.push_back(2);
//    numbers.push_back(9);
//    numbers.push_back(3);
//    numbers.push_back(1);
//    numbers.push_back(5);
//    numbers.push_back(7);
//    numbers.push_back(6);
//    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    
    int index=1;
    int lpos=9;
    int rpos=11;
    vector<ve>v;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            v.push_back(ve(index,i,j));
//            vvv[i].push_back(1);
            index++;
        }
    }
    
    sort(v.begin(), v.end());
    for(int i=0;i<numbers.size();i++){
        if(numbers[i]==1||numbers[i]==4||numbers[i]==7){
            answer+='L';
            lpos=numbers[i]-1;
        }else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            answer+='R';
            rpos=numbers[i]-1;
        }
         if(numbers[i]==2){
            if((abs(v[rpos].xpos-v[1].xpos)+(abs(v[rpos].ypos-v[1].ypos)))<(abs(v[lpos].xpos-v[1].xpos)+(abs(v[lpos].ypos-v[1].ypos)))){
                rpos=1;
                answer+='R';
            }
        }
         if(numbers[i]==2){
            if((abs(v[rpos].xpos-v[1].xpos)+(abs(v[rpos].ypos-v[1].ypos)))>(abs(v[lpos].xpos-v[1].xpos)+(abs(v[lpos].ypos-v[1].ypos)))){
                lpos=1;
                answer+='L';
            }
        }
        if(numbers[i]==2){
           if((abs(v[rpos].xpos-v[1].xpos)+(abs(v[rpos].ypos-v[1].ypos)))==(abs(v[lpos].xpos-v[1].xpos)+(abs(v[lpos].ypos-v[1].ypos)))){
               if(hand=="right"){
                   rpos=1;
                   answer+='R';
               }
               else{
                   lpos=1;
                   answer+='L';
               }
           }
       }
        
         if(numbers[i]==5){
            if((abs(v[rpos].xpos-v[4].xpos)+(abs(v[rpos].ypos-v[4].ypos)))<(abs(v[lpos].xpos-v[4].xpos)+(abs(v[lpos].ypos-v[4].ypos)))){
                rpos=4;
                answer+='R';
            }
        }
         if(numbers[i]==5){
            if((abs(v[rpos].xpos-v[4].xpos)+(abs(v[rpos].ypos-v[4].ypos)))>(abs(v[lpos].xpos-v[4].xpos)+(abs(v[lpos].ypos-v[4].ypos)))){
                lpos=4;
                answer+='L';
            }
        }
         if(numbers[i]==5){
            if((abs(v[rpos].xpos-v[4].xpos)+(abs(v[rpos].ypos-v[4].ypos)))==(abs(v[lpos].xpos-v[4].xpos)+(abs(v[lpos].ypos-v[4].ypos)))){
                if(hand=="right"){
                    rpos=4;
                    answer+='R';
                }
                else{
                    lpos=4;
                    answer+='L';
                }
              
            }
        }
         if(numbers[i]==8){
            if((abs(v[rpos].xpos-v[7].xpos)+(abs(v[rpos].ypos-v[7].ypos)))<(abs(v[lpos].xpos-v[7].xpos)+(abs(v[lpos].ypos-v[7].ypos)))){
                rpos=7;
                answer+='R';
            }
        }
         if(numbers[i]==8){
            if((abs(v[rpos].xpos-v[7].xpos)+(abs(v[rpos].ypos-v[7].ypos)))>(abs(v[lpos].xpos-v[7].xpos)+(abs(v[lpos].ypos-v[7].ypos)))){
                lpos=7;
                answer+='L';
            }
        }
         if(numbers[i]==8){
            if((abs(v[rpos].xpos-v[7].xpos)+(abs(v[rpos].ypos-v[7].ypos)))==(abs(v[lpos].xpos-v[7].xpos)+(abs(v[lpos].ypos-v[7].ypos)))){
                if(hand=="right"){
                    rpos=7;
                    answer+='R';
                }
                else{
                    lpos=7;
                    answer+='L';
                }
            }
        }
         if(numbers[i]==0){
            if((abs(v[rpos].xpos-v[10].xpos)+(abs(v[rpos].ypos-v[10].ypos)))<(abs(v[lpos].xpos-v[10].xpos)+(abs(v[lpos].ypos-v[10].ypos)))){
                rpos=10;
                answer+='R';
            }
        }
         if(numbers[i]==0){
            if((abs(v[rpos].xpos-v[10].xpos)+(abs(v[rpos].ypos-v[10].ypos)))>(abs(v[lpos].xpos-v[10].xpos)+(abs(v[lpos].ypos-v[10].ypos)))){
                lpos=10;
                answer+='L';
            }
        }
         if(numbers[i]==0){
            if((abs(v[rpos].xpos-v[10].xpos)+(abs(v[rpos].ypos-v[10].ypos)))==(abs(v[lpos].xpos-v[10].xpos)+(abs(v[lpos].ypos-v[10].ypos)))){
                if(hand=="right"){
                    rpos=10;
                    answer+='R';
                }
                else{
                    lpos=10;
                    answer+='L';
                }
            }
        }
    }
    
    
    
    
    
    cout<<answer<<"\n";
    return 0;
}
