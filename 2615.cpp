//
//  2615.cpp
//  algo
//
//  Created by 박효정 on 2021/08/16.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

//승리한 바둑의 종류와, 승리 문자열
vector<pair<int, int>>res;
int col=0;
int arr[20][20];
int tmp[20][20];


void copy(){
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            tmp[i][j]=arr[i][j];
        }
    }
}

void check(int color){
    //흰색 오목 확인
    
    copy();
    //행 빙고
    for(int i=1;i<=19;i++){
        int cnt=0;
        pair<int, int>pos;
        int sum=987654321;
        for(int j=1;j<=19;){
            if(tmp[i][j]==color){
                while(tmp[i][j]==color){
                    tmp[i][j]=-1;
                    if(sum>i+j){
                        pos.first=i;
                        pos.second=j;
                        sum=i+j;
                    }
                    cnt++;
                    j++;
                }
            }else{
                j++;
            }
            if(cnt==5){
                col=color;
                res.push_back({pos.first,pos.second});
                
            }
            cnt=0;
        }
    }
    copy();
    if(col==0){
        
        //열 빙고
        for(int i=1;i<=19;i++){
            int cnt=0;
            pair<int, int>pos;
            int sum=987654321;
            for(int j=1;j<=19;){
                if(tmp[j][i]==color){
                    while(tmp[j][i]==color){
                        tmp[j][i]=-1;
                        if(sum>i+j){
                            pos.first=j;
                            pos.second=i;
                            sum=i+j;
                        }
                        cnt++;
                        j++;
                    }
                }else{
                    j++;
                }
                if(cnt==5){
                    col=color;
                    res.push_back({pos.first,pos.second});
                    
                }
                cnt=0;
            }
        }
    }
    
    copy();
    //왼쪽위부터 오른쪽 아래로 내려가는 대각선 빙고 확인
    if(col==0){
        
        for(int i=1;i<=19;i++){
            for(int j=1;j<=19;j++){
                if(tmp[i][j]==color){
                    int cnt=0;
                    int tx=i;
                    int ty=j;
                    pair<int, int>pos;
                    int sum=987654321;
                    while(tmp[tx][ty]==color){
                        tmp[tx][ty]=-1;
                        if(sum>tx+ty){
                            pos.first=tx;
                            pos.second=ty;
                            sum=tx+ty;
                        }
                        cnt++;
                        tx+=1;
                        ty+=1;
                    }
                    if(cnt==5){
                        col=color;
                        res.push_back({pos.first,pos.second});
                    }
                }
            }
        }
    }
    
    copy();
    //오른쪽 위부터 오른쪽 아래로 내려가는 대각선 빙고 확인
    if(col==0){
        
        for(int i=1;i<=19;i++){
            for(int j=1;j<=19;j++){
                if(tmp[i][j]==color){
                    int cnt=0;
                    int tx=i;
                    int ty=j;
                    pair<int, int>pos;
                    int sum=987654321;
                    while(tmp[tx][ty]==color){
                        tmp[tx][ty]=-1;
                        if(sum>ty){
                            pos.first=tx;
                            pos.second=ty;
                            sum=ty;
                        }
                        cnt++;
                        tx+=1;
                        ty-=1;
                    }
                    if(cnt==5){
                        col=color;
                        res.push_back({pos.first,pos.second});
                    }
                }
            }
        }
    }
    
    
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    //바둑 입력
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            cin>>arr[i][j];
        }
        
        
    }
    
    
    
    check(1);
    check(2);
    if(col!=0){
        cout<<col<<"\n";
        cout<<res.front().first<<' '<<res.front().second<<"\n";
    }else{
        cout<<col<<"\n";
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
