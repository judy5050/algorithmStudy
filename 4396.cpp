//
//  4396.cpp
//  algo
//
//  Created by 박효정 on 2021/08/14.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[]={-1,0,0,1,-1,-1,1,1};
int dy[]={0,1,-1,0,1,-1,1,-1};
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    vector<vector<int>>c(n,vector<int>(n));
    vector<vector<char>>map(n,vector<char>(n));
    vector<vector<char>>cmp(n,vector<char>(n));
    //맵 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    
    //게임에서 누른 칸 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cmp[i][j];
        }
    }
    
    //좌표 주변 지뢰 수 확인
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cnt=0;
            if(map[i][j]!='.'){
                c[i][j]=-1;
            }
            else{
                for(int k=0;k<8;k++){
                    int nx=dx[k]+i;
                    int ny=dy[k]+j;
                    if(nx>=0&&ny>=0&&nx<n&&ny<n){
                        if(map[nx][ny]=='*'){
                            cnt++;
                        }
                    }
                }
            }
            c[i][j]=cnt;
            
            
        }
    }
    
    
    bool ch=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]=='*'&&cmp[i][j]=='x'){
                ch=true;
                break;
            }
        }
    }
    
    if(ch==false){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(cmp[i][j]=='x'){
                    cout<<c[i][j];
                }else{
                    cout<<'.';
                }
            }
            cout<<"\n";
        }
        
        
        
        
        
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(cmp[i][j]=='x'&&map[i][j]!='*'){
                    cout<<c[i][j];
                }else if(map[i][j]=='*'){
                    cout<<'*';
                }
                else{
                    cout<<'.';
                }
            }
            cout<<"\n";
        }
        
    }
    
    
    
    
    
    return 0;
}
