////
////  2578.cpp
////  algo
////
////  Created by 박효정 on 2021/04/28.
////
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int arr[6][6];
    int cnt=0;
    int ch=0;
    vector<int> row[6];
    vector<int> col[6];
    vector<int> d[2];
    queue<int>q;
    int res=0;
    //철수 배열 입력
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    
    //사회가 수 입력
    int a;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a;
            
            //큐에 저장
            q.push(a);
        }
    }

        
       //사회자가 숫자를 부른다
        while(!q.empty()){
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(q.front()==arr[i][j]){
                        res++;
                       
                        if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==4)){
                            d[0].push_back(arr[i][j]);
                        }
                        if((i==0&&j==4)||(i==1&&j==3)||(i==2&&j==2)||(i==3&&j==1)||(i==4&&j==0)){
                            d[1].push_back(arr[i][j]);
                        }
                        //행과 열에 각 잢을 넣음
                        row[i].push_back(arr[i][j]);
                        col[j].push_back(arr[i][j]);
                        q.pop();
                        ch=1;
                        break;
                    }
                   
                }
                if(ch==1){
                    ch=0;
                    break;
                }
            }
            
            if(d[0].size()>=5){
                cnt++;
                d[0].clear();
            }
            if(d[1].size()>=5){
                cnt++;
                d[1].clear();
            }
            for(int i=0;i<5;i++){
                if(row[i].size()>=5){
                    cnt++;
                    row[i].clear();
                }
                if(col[i].size()>=5){
                    cnt++;
                    col[i].clear();
                }
            }
            
            if(cnt>=3){
                break;
            }
            
            
        }
        
    cout<<res<<"\n";
    
    return 0;
}
