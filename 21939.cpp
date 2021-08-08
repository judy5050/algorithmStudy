//
//  21939.cpp
//  algo
//
//  Created by 박효정 on 2021/08/06.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

using namespace std;


//high용
struct cmp{
    bool operator()(pair<int, int>a,pair<int, int>b){

        if(a.first==b.first){
            return a.second<b.second;
        }else{
            return a.first<b.first;
        }

    }

};

//low용
struct cmp2{
    bool operator()(pair<int, int>a,pair<int, int>b){

        if(a.first==b.first){
            return a.second>b.second;
        }else{
            return a.first>b.first;
        }

    }
};


int main(){


    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    priority_queue<pair<int, int>,vector<pair<int, int>>,cmp2>low;
    priority_queue<pair<int, int>,vector<pair<int, int>>,cmp>high;
    int n;
    map<int,int>m;
    cin>>n;
    int p,l;
    for(int i=0;i<n;i++){
        cin>>p>>l;
        m.insert({p,l});
        low.push({l,p});
        high.push({l,p});
    }


    int num;
    cin>>num;
    string s;
    while(num--){

        cin>>s;
        if(s=="add"){
            int a,b;
            cin>>a>>b;
            m.insert({a,b});
            low.push({b,a});
            high.push({b,a});
        }else if(s=="solved"){
            int b;
            cin>>b;
            m.erase(b);
        }else if(s=="recommend"){
            int b;
            cin>>b;
            if(b==1){
                while (1) {
                    if(m.find(high.top().second)!=m.end()&&m[high.top().second]==high.top().first){
                        cout<<high.top().second<<"\n";
//                        m.erase(high.top().second);
//                        high.pop();

                        break;
                    }else{
                        high.pop();
                    }
                }

            }else{
                while (1) {
                    if(m.find(low.top().second)!=m.end()&&m[low.top().second]==low.top().first){
                        cout<<low.top().second<<"\n";
//                        m.erase(low.top().second);
//                        low.pop();
                        break;
                    }else{
                        low.pop();
                    }
                }


            }
        }







    }




    return 0;
}
