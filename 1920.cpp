//
//  1920.cpp
//  algo
//
//  Created by 박효정 on 2021/05/19.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n;
    
    vector<int>v_n(n);
    for(int i=0;i<n;i++){
        cin>>v_n[i];
    }
    //오름차 정렬
    sort(v_n.begin(), v_n.end());
    cin>>m;
    vector<int>v_m(m);
    for(int i=0;i<m;i++){
        cin>>v_m[i];
    }
    
   
    //찾아야 할 수의 기준으로 for문을 돌린다
    for(int i=0;i<v_m.size();i++)
    {
        bool flag=false;
        int lt=0;
        //n과 m의 수는 다를수 있음
        //rt를 v_n의 크기로 잡아야 한다
        //rt를 v_m의 크기로 잡을경우, 틀림
        int rt=(int)v_n.size()-1;
        int mid=0;
        //while문 종료 조건
        while(lt<=rt){
            mid=(rt+lt)/2;
            //mid에 해당하는 v_n의 벡터값이 찾고가 하는 수 보다 작으면
            //mid까지는 모두 찾고자 하는 수보다 작은 값들이 들어있다.
            if(v_m[i]>v_n[mid]){
                lt=mid+1;
            }
            //위의 경우와 반대
            else if(v_m[i]<v_n[mid]){
                rt=mid-1;
               
            }
            //같을경우 탈출해도 됨
            else if(v_m[i]==v_n[mid]){
                flag=true;
                break;
            }
            
            
            
            
        }
        
        if(flag==false){
            cout<<0<<"\n";

        }
        else{
            cout<<1<<"\n";
        }
        
        
    }
    
    
    
    
    return 0;
}
