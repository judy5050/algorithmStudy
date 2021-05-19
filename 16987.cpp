//
//  16987.cpp
//  algo
//
//  Created by 박효정 on 2021/05/18.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int res;
int cnt;
int n;
struct a{
    int size,weight;
    a(int a,int b){
        size=a;
        weight=b;
    }
};
vector<a>v;
void bac(int l){
    if(l==n){
        cnt=0;
        for(int i=0;i<n;i++){
            if(v[i].size<=0){
                cnt++;
            }
        }
        res=max(res,cnt);
         
    }
    //잡은 계란이 깨진계란인경우
    if(v[l].size<=0){
        if(l+1<=n){
            bac(l+1);
        }
       
    }
    //위의 조건이 다 아닐경우
    else{
        //깰수 있는 계란이 있는지 유무 확인
        bool flag=false;
        //공격 당할 계란 무작위 선택
                for(int i=0;i<n;i++){
                    //내가 든 계란과 공격할 계란이 동일할경우 혹은 내가 공격할 계란이 이미 깨진 계란일 경우
                    if(l==i||v[i].size<=0){
                        //넘어감
                        continue;
                    }
                    //계란 깨기
                    v[l].size=v[l].size-v[i].weight;
                    v[i].size=v[i].size-v[l].weight;
                    flag=true;
                    //내가 선택한 계란의 오른쪽 계란집기
                    bac(l+1);
                    //원상복귀
                    v[l].size=v[l].size+v[i].weight;
                    v[i].size=v[i].size+v[l].weight;
                }
        //깰 계란이 없을경우 바로 n호출해 깨진 계란 확인하기 
        if(!flag) bac(n);

        }

        
    
}


int main(){

  
    cin>>n;
    
    int size,weight;
    for(int i=0;i<n;i++){
        cin>>size>>weight;
        v.push_back(a(size,weight));
    }
    bac(0);
    cout<<res<<"\n";
    return 0;
   
}

