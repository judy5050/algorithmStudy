//
//  프로그래머스_하샤드수.cpp
//  algo
//
//  Created by 박효정 on 2021/10/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    
    int x=11;
    bool answer = true;
       int num=0;
       while(x>0){
           int tmp=x%10;
           num+=tmp;
           x/=10;
       }
       
       if((x%num)!=0){
           answer=false;
       }
    
    
    
    
    
    
    
    
    
    return 0;
}
