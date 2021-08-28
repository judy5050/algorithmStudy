//
//  18511.cpp
//  algo
//
//  Created by 박효정 on 2021/08/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int n;
int k;
int res=0;
vector<int>v;

//num 은 주어진 k개의 종류 원소로 만들수 있는 숫자
//ten은 자릿수
void dfs(int num,int ten){
    
    if(n<num){
        return;
    }
    res=max(res,num);
    for(int i=0;i<v.size();i++){
        dfs(num+v[i]*ten,ten*10);
    }
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
   
    cin>>n;
  
    cin>>k;
    
  
    
    //입력
    for(int i=0;i<k;i++){
        int input;
        cin>>input;
        v.push_back(input);
     
    }
    
    
    //정렬
    sort(v.begin(), v.end());
    
    dfs(0,1);
    
    cout<<res<<"\n";
    
    return 0;
}
