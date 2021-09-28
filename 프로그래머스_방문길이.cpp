//
//  프로그래머스_방문길이.cpp
//  algo
//
//  Created by 박효정 on 2021/09/28.
//

#include <string>
#include <vector>
using namespace std;

int vis[11][11][11][11];

int solution(string dirs) {
    int answer = 0;
    int nx=5;
    int ny=5;
    for(int i=0;i<dirs.size();i++){
        //위쪽
        if(dirs[i]=='U'){
            if(ny-1>=0&&ny-1<11){
                
                if(vis[nx][ny][nx][ny-1]==0){
                   vis[nx][ny][nx][ny-1]=1;
                    vis[nx][ny-1][nx][ny]=1;
                   
                    answer++;
                   
                }
                 ny-=1;
            }
           
           
        }else if(dirs[i]=='D'){
            
            if(ny+1>=0&&ny+1<11){
                
                if(vis[nx][ny][nx][ny+1]==0){
                   vis[nx][ny][nx][ny+1]=1;
                    vis[nx][ny+1][nx][ny]=1;
                   
                    answer++;
                }
                 ny+=1;
            }
            
        }else if(dirs[i]=='R'){
            if(nx+1>=0&&nx+1<11){
                if(vis[nx][ny][nx+1][ny]==0){
                   vis[nx][ny][nx+1][ny]=1;
                     vis[nx+1][ny][nx][ny]=1;
                   
                    answer++;
                }
                 nx+=1;
            }
            
            
        }else if(dirs[i]=='L'){
            if(nx-1>=0&&nx-1<11){
               
                if(vis[nx][ny][nx-1][ny]==0){
                    vis[nx][ny][nx-1][ny]=1;
                    vis[nx-1][ny][nx][ny]=1;
                    
                    answer++;
                  
                }
                nx-=1;
            }

            
          
        }
    }
    
    
    
    return answer;
}
