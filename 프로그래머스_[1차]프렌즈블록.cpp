//
//  프로그래머스.cpp
//  algo
//
//  Created by 박효정 on 2021/10/06.
//
#include <string>
#include <vector>
#include <algorithm>
#define MAX 10000000
using namespace std;

#include <string>
#include <vector>

using namespace std;

int dx[]={1,0,1};
int dy[]={0,1,1};

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    vector<string> map=board;
    int ch=true;
    
    //지워질 캐릭터가 없을떼 까지  //지워질 캐릭터가 없을떼 까지
    while(ch==true){
        ch=false;
        vector<pair<int,int>>lis;
        for(int i=0;i<map.size();i++){
 
            for(int j=0;j<map[i].size();j++){
                int cnt=0;
                vector<pair<int,int>>ve;
                ve.push_back({i,j});
                for(int k=0;k<3;k++){
                  
                     int nx=i+dx[k];
                     int ny=j+dy[k];
                    //지워진 판이 아닐때까지

                    if(nx>=0&&nx<map.size()&&ny>=0&&ny<map[i].size()&&map[nx][ny]==map[i][j]&&map[nx][ny]!='-'){
                       
                        cnt++;
                        ve.push_back({nx,ny});
                    }
                }
                 if(cnt==3){
                    for(int k=0;k<ve.size();k++){

                        lis.push_back({ve[k].first,ve[k].second});

                    }
                     lis.push_back({i,j});
                }
            }
           
        }
        
        //한 게임이 끝나면 지울 배열 지우기
        for(int i=0;i<lis.size();i++){
            
             
                    ch=true;
            if(map[lis[i].first][lis[i].second]!='-'){
                
                        map[lis[i].first][lis[i].second]='-';
                        answer++;
                    
            }
            
        }
        
        //옮기기

        for (int i = m - 1; i >= 0; i--)
            {
                for (int j= 0; j < n; j++)
                {
                    if (map[i][j] == '-') continue;

                    int nx = i + 1;
                    while (nx < m && map[nx][j] == '-') nx++;
                    nx--;
                    if (nx != i)
                    {
                        map[nx][j] = map[i][j];
                        map[i][j] = '-';
                    }
                }
            }
        
    }
     
    return answer;
}
