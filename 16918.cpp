//
//  16918.cpp
//  algo
//
//  Created by 박효정 on 2021/07/25.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[201][201];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
int r,c,n;
//struct qu{
//    int x,y,s;
//
//    qu(int a,int b,int c){
//        x=a;
//        y=b;
//        c=s;
//    }
//
//    bool operator <(const qu & b) const{
//        return  s<b.s;
//
//    }
//
//};
//
//priority_queue<qu>pq;


void sub(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>0){
                arr[i][j]-=1;
            }
        }
    }
    
    
    
}

void add(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==-1){
                arr[i][j]=3;
            }
        }
    }
    
    
}
void boom(){
    queue<pair<int,int>>q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                arr[i][j]=-1;
                for(int k=0;k<4;k++){
                    if(i+dx[k]>=0&&i+dx[k]<r&&j+dy[k]>=0&&j+dy[k]<c){
                        if(arr[i+dx[k]][j+dy[k]]==0){
                            q.push({i+dx[k],j+dy[k]});
                            arr[i+dx[k]][j+dy[k]]=-1;
                        }
                        else{
                            arr[i+dx[k]][j+dy[k]]=-1;
                        }
                    }
                }
            }
        }
    }
    
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            if(x+dx[k]>=0&&x+dx[k]<r&&y+dy[k]>=0&&y+dy[k]<c){
                arr[x+dx[k]][dy[k]+y]=-1;
            }
        }
        
        
        
        
        
    }
    
    
    
    
    
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
  
    cin>>r>>c>>n;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char ch;
            cin>>ch;
            if(ch=='O'){
                arr[i][j]=3;
            }else if(ch=='.'){
                arr[i][j]=-1;
            }
        }
    }
    
    //처음 아무것도 하지 않음
    n--;
    sub();
    while(n>0){
        if(n-1>=0){
            sub();
            add();
            n--;
        }
        if(n-1>=0){
            sub();
            
            boom();
           
            n--;
        }
        
        
        
        
        
        
        
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==-1){
                cout<<'.';
            }else{
                cout<<'O';
            }
        }
        cout<<"\n";
    }
    
    
    return 0;
}
