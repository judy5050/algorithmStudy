#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int vis[101][101];
int col;
int row;
int map[101][101];
struct qu{
    int x;
    int y;
    int color;
    int wid;
    qu(int a,int b,int c,int d){
        x=a;
        y=b;
        color=c;
        wid=d;
    }
    bool operator <(const qu & b) const{
        return wid<b.wid;
    }
    
};
int bfs(int a,int b,int c){
    
    int dx[4]={0,1,-1,0};
    int dy[4]={1,0,0,-1};
    int num=1;
    queue<qu>q;
    vis[a][b]=1;
    q.push(qu(a,b,c,1));
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        int color=q.front().color;
        int cnt=q.front().wid;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
           
            if(nx>=0&&ny>=0&&nx<row&&ny<col){
                if(vis[nx][ny]==0&&color==map[nx][ny]){
                    vis[nx][ny]=1;
                    num++;
                    q.push({nx,ny,color,cnt});
                }
            }
        }
        
    }
    
    return num;
    
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    
    
    for(int i=0;i<m;i++){
        fill(vis[i],vis[i]+n,0);
        for(int j=0;j<n;j++){
            map[i][j]=picture[i][j];
        }
    }
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int cnt=0;//영역갯수
    int val=0;
    int tmp=0;
    row=m;
    col=n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]==0&&picture[i][j]!=0){
                 tmp=bfs(i,j, picture[i][j]);
                 cnt++;
                val=max(tmp,val);
            }
            
        }
    }
   
    
    
    
    
    number_of_area=cnt;
    max_size_of_one_area=val;
    
    
    
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
