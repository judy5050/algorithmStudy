//
//  2531.cpp
//  algo
//
//  Created by 박효정 on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#include <vector>



using namespace std;


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    //벨트에 있는 초밥수, 초밥가짓수, 연속해 먹는 접시 수,쿠폰 번호
    int n,d,k,c;
    
    cin>>n>>d>>k>>c;
    
    vector<int>ch(d+1,0);
    vector<int>cmp(d+1,0);
   
    
    int res=-987654321;
    
    vector<int>v(n*2);
    
    //입력
    for(int i=0;i<n;i++){
        
        cin>>v[i];
        v[i+n]=v[i];
        //회전판에 있는 초밥의 겹치는 수를 확인하기 위해
        ch[v[i]]++;
        cmp[v[i]]++;
        
    }
    
    int lt=0;
    int rt=0;
    
    int cnt=0;
    while(1){
        
      
        //연속된 k수 보다 클 경우
        if(rt-lt>k-1){
            
            //기존 수 하나 원상복귀
            cmp[v[lt]]++;
            lt++;
            
            
        }
        else if(rt==v.size()){
        
            if(rt-lt==(k-1)){
                for(int i=1;i<=d;i++){
                    if((ch[i]!=cmp[i])&&ch[i]!=0){
                        cnt++;
                    }
                    else if((ch[i]==cmp[i])&&i==c){
                        cnt++;
                    }
                }
                
                if(res<cnt){
                    
                    res=cnt;
                }
                cnt=0;
            }
            break;
        }
        else if(rt-lt<=k-1){
            
          
            //먹은것 체크
            cmp[v[rt]]--;
            
            
            if(rt-lt==(k-1)){
                for(int i=1;i<=d;i++){
                    if((ch[i]!=cmp[i])&&ch[i]!=0){
                        cnt++;
                    }
                    else if((ch[i]==cmp[i])&&i==c){
                        cnt++;
                    }
                }
                
                if(res<cnt){
                    
                    res=cnt;
                }
                cnt=0;
            }
            
            rt++;
        
            
        }
        
       
        
        
       
      
        
      
    }
    
    cout<<res<<"\n";
    
    return 0;
}
