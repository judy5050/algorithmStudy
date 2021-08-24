////
////  13549.cpp
////  algo
////
////  Created by 박효정 on 2021/08/23.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int vis[200001];
//
//int main(){
//
//    cin.tie(0);
//    cout.tie(0);
//    std::ios::sync_with_stdio(false);
//
//
//    int n,k;
//    cin>>n>>k;
//
//    priority_queue <pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> >> pq;
//    pq.push({0,n});
//    vis[n]=1;
//    int res=987654321;
//    while (!pq.empty()) {
//        int move=pq.top().second;
//        int cnt=pq.top().first;
//        pq.pop();
//        if(move==k){
//            res=cnt;
//            break;
//
//
//        }
//
//        if(move*2<=200000&&vis[move*2]==0){
//            pq.push({cnt,move*2});
//            vis[move*2]=1;
//        }
//
//
//        if(move-1>=0&&vis[move-1]==0){
//            pq.push({cnt+1,move-1});
//            vis[move-1]=1;
//        }
//        //한칸 뒤 이동
//        if(move+1<=200000&&vis[move+1]==0){
//            pq.push({cnt+1,move+1});
//            vis[move+1]=1;
//        }
//
//
//
//    }
//
//
//    cout<<res<<"\n";
//
//
//    return 0;
//}


//
//  13549.cpp
//  algo
//
//  Created by 박효정 on 2021/08/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int vis[200001];

struct qu{
    int m,val;
    
    qu(int a,int b){
        m=a;
        val=b;
    }
    
    bool operator<(const qu & b)const{
        if(val==b.val){
            return m>b.m;
        }else{
            return val>b.val;
        }
      
    }
};


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,k;
    cin>>n>>k;
    
    priority_queue<qu>pq;
    pq.push(qu{n,0});
    vis[n]=1;
    int res=987654321;
    while (!pq.empty()) {
        int move=pq.top().m;
        int cnt=pq.top().val;
        pq.pop();
        if(move==k){
            res=cnt;
            break;
          
         
        }
        if(move*2<=200000&&vis[move*2]==0){
            pq.push(qu(move*2,cnt));
            vis[move*2]=1;
        }
        //한칸 뒤 이동
        if(move+1<=200000&&vis[move+1]==0){
            pq.push(qu(move+1,cnt+1));
            vis[move+1]=1;
        }
      
        if(move-1>=0&&vis[move-1]==0){
            pq.push(qu(move-1,cnt+1));
            vis[move-1]=1;
        }
      
      
      
       
       
       
        
    }
    
    
    cout<<res<<"\n";
    
    
    return 0;
}
