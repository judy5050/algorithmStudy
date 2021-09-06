//
//  15686.cpp
//  algo
//
//  Created by 박효정 on 2021/09/02.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int arr[52][52];
int res=987654321;
vector<string>list;
//치킨
vector<pair<int, int>>c;

//홈
vector<pair<int, int>>h;
vector<pair<int, int>>pos;
int n,m;
//치킨집 수
int num=0;


int cal(){
    int sum=0;

    for(int i=0;i<h.size();i++){
        int tmp=987654321;
        int hx=h[i].first;
        int hy=h[i].second;
        for(int j=0;j<pos.size();j++){
            int x=pos[j].first;
            int y=pos[j].second;
            tmp=min(tmp,abs(x-hx)+abs(y-hy));
        }
        sum+=tmp;
    }
    
    return sum;
}

//치킨 가게 선택 방법 고르기 (list 벡터에 저장)
void dfs(int index,int cnt){

    if(index>=num||cnt>=m){
        if(cnt==m){
           
            res=min(res,cal());
            
        }
        return;
    }
    else{
        pos.push_back({c[index].first,c[index].second});
        dfs(index+1,cnt+1);
        pos.pop_back();
        dfs(index+1, cnt);
    }
    
}


int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);


    cin>>n>>m;


    //입력 받음
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                h.push_back({i,j});
            }else if(arr[i][j]==2){
                num++;
                c.push_back({i,j});
            }
        }
    }


    //최대 m개의 치킨 가게 선택
    dfs(0,0);
    



    cout<<res<<"\n";


    return 0;
}

