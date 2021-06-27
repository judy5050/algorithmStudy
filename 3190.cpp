//
//  3190.cpp
//  algo
//
//  Created by 박효정 on 2021/06/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;


struct qu{
    
    //행,열,방향, 시간
    int x,y,dir,t;
    qu(int a,int b,int c,int d){
        x=a;
        y=b;
        dir=c;
        t=d;
    }
    
    
    
};



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k,l,x;
    char c;

    //입력
    cin>>n;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    cin>>k;
    for(int i=0;i<k;i++){
        int row,col;
        cin>>row>>col;
        //사과가 있는 곳에는 1
        v[row][col]=1;
    }
    cin>>l;
    queue<pair<int, int>>ap;
    for(int i=0;i<l;i++){
        cin>>x>>c;
        ap.push({x,c});
    }
    //끝
    //v 즉 맵의 아무것도 존재 x 0 맵에 사과 존재 1, 맵에 뱀이 위치한 곳 2
    v[1][1]=2;
    //뱀에 관한 것
    queue<qu>q;
    //뱀은 1행1열, 방향 오른쪽,시간 0,갈이 1
    //초기 값
    q.push(qu(1,1,1,1));
    //뱀의 전체 위치
    queue<pair<int,int>>pos;
    pos.push({1,1});
    while (1) {
        int nx,ny;
        //방향 전환 시간 확인
        if(q.front().t==ap.front().first+1){
            if(q.front().dir==1){
                //왼쪽일 경우
                if(ap.front().second=='L'){
                    q.push(qu(q.front().x,q.front().y,2,q.front().t));
                    q.pop();
                    ap.pop();
                }
                else{
                   
                        q.push(qu(q.front().x,q.front().y,4,q.front().t));
                        q.pop();
                        ap.pop();
                 
                }
            }
            else if(q.front().dir==2){
                //왼쪽일 경우
                if(ap.front().second=='L'){
                    q.push(qu(q.front().x,q.front().y,3,q.front().t));
                    q.pop();
                    ap.pop();
                }
                else{
                   
                        q.push(qu(q.front().x,q.front().y,1,q.front().t));
                        q.pop();
                        ap.pop();
                 
                }
            }
            else if(q.front().dir==3){
                //왼쪽일 경우
                if(ap.front().second=='L'){
                    q.push(qu(q.front().x,q.front().y,4,q.front().t));
                    q.pop();
                    ap.pop();
                }
                else{
                   
                        q.push(qu(q.front().x,q.front().y,2,q.front().t));
                        q.pop();
                        ap.pop();
                 
                }
            }
            
            else if(q.front().dir==4){
                //왼쪽일 경우
                if(ap.front().second=='L'){
                    q.push(qu(q.front().x,q.front().y,1,q.front().t));
                    q.pop();
                    ap.pop();
                }
                
                //오른쪽 일경우
                else{
                   
                        q.push(qu(q.front().x,q.front().y,3,q.front().t));
                        q.pop();
                        ap.pop();
                 
                }
            }

        }
        //머리 오른쪽일 경우
        if(q.front().dir==1){
            //오른쪽으로 이동
            nx=q.front().x;
            ny=q.front().y+1;

        }
        //위쪽일 경우
        else if(q.front().dir==2){
            nx=q.front().x-1;
            ny=q.front().y;
        }
        //왼쪽일 경우
        else if(q.front().dir==3){
            nx=q.front().x;
            ny=q.front().y-1;
        }
        //아래쪽 일 경우
        else{
            nx=q.front().x+1;
            ny=q.front().y;
        }
        
        //밖으로 나가지 않았을 경우
        if(nx>0&&nx<=n&&ny>0&&ny<=n){
            if(v[nx][ny]!=2){
                //사과 존재
                if(v[nx][ny]==1){
                    v[nx][ny]=0;
                    
                }
                //존재 x 경우
                else{
                    v[pos.front().first][pos.front().second]=0;
                    pos.pop();
                }
                //뱀위치 추가
                v[nx][ny]=2;
                pos.push({nx,ny});
           
            }
            else{
                break;
            }
          
            
        }else{
            break;
        }
        
        q.push(qu(nx,ny,q.front().dir,q.front().t+1));
        q.pop();
     
        
        
        
        
        
        
        
        
    }
    
    
    cout<<q.front().t<<"\n";
    
    
    
    
    return 0;
}
