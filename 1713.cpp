//
//  1713.cpp
//  algo
//
//  Created by 박효정 on 2021/11/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct ve{

    //사진틀에 입장한 시점
    int time;
    //추천수
    int cnt;
    //학생번호
    int stu;
    
    ve(int a,int b,int c){
        time=a;
        cnt=b;
        stu=c;
    }
    
    bool operator <(const ve & b) const{
        //추천수가 같은 경우
        if(cnt==b.cnt){
            //숫자가 적을수록 사진틀에 걸린지 오래된 사람
            return time<b.time;
        }
        return cnt<b.cnt;
    }
    
};

int ch[101];
vector<ve>v;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,s;
    cin>>n>>s;
    
    for(int i=0;i<s;i++){
        int num;
        cin>>num;
        if(v.size()<n&&ch[num]==0){
            v.push_back({i,1,num});
            ch[num]=1;
        }else if(ch[num]!=0){
            //투표수 증가
            for(int j=0;j<v.size();j++){
                if(v[j].stu==num){
                    v[j].cnt+=1;
                    break;
                }
            }
        }else{
            sort(v.begin(), v.end());
            ch[v[0].stu]=0;
            v.erase(v.begin());
            v.push_back(ve(i,1,num));
            ch[num]=1;
        }
        
    }
  
    
    vector<int>res;
    for(int i=0;i<v.size();i++){
        res.push_back(v[i].stu);
    }
    sort(res.begin(), res.end());
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<' ';
    }
    cout<<"\n";
    
    
    
    
    
    
    
    return 0;
}
