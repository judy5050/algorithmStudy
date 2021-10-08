//
//  프로그래머스_포켓몬.cpp
//  algo
//
//  Created by 박효정 on 2021/10/08.
//

#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

vector<int>lis;
vector<int>tmp;
int res=0;


int solution(vector<int> nums)
{
    int answer = 0;
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        if(m[nums[i]]==0){
            m[nums[i]]=1;
        }
        if(m.size()==nums.size()/2){
           
            break;
        }
    }
     res=m.size();
    
    answer=res;
    
    return answer;
}
