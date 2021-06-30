//
//  프로그래머스_단체사진찍기.cpp
//  algo
//
//  Created by 박효정 on 2021/06/30.
//

#include <cstring>
#include <vector>
#include <algorithm>


using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    int answer = 0;
    vector<char>v;
    v.push_back('A');
    v.push_back('C');
    v.push_back('F');
    v.push_back('J');
    v.push_back('M');
    v.push_back('N');
    v.push_back('R');
    v.push_back('T');
 
  bool flag=true;
    
    do{
           flag=true;
          for(int i=0;i<data.size();i++){
              char start=data[i][0];
              char end=data[i][2];
              char c=data[i][3];
              int num=(data[i][4]-'0');
              
              int index1;
              int index2;
              index1=find(v.begin(),v.end(),start)-v.begin();
              index2=find(v.begin(),v.end(),end)-v.begin();
              if(c=='='){
                  if(abs(index1-index2)-1!=num){
                      flag=false;
                      break;
                  }
              }else if(c=='<'){
                  if(abs(index1-index2)-1>=num){
                      flag=false;
                      break;
                  }
              }else if(c=='>'){
                    if(abs(index1-index2)-1<=num){
                      flag=false;
                        break;
                  }
              }
              
              
          }
          
          if(flag==true){
              answer++;
          }
          
          
      }while(next_permutation(v.begin(),v.end()));
    
    
    
    
    return answer;
}
