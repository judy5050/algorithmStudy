////
////  7795.cpp
////  algo
////
////  Created by 박효정 on 2021/05/19.
////
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    int c;
    int n,m;
    cin>>c;
    int cnt=0;


    int lt,mid,rt;
    while(c--){
        int res=0;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        //오름차 정렬
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cnt=0;
        for(int i=0;i<a.size();i++){
            lt=0;
            rt=(int)b.size()-1;
            while (lt<=rt) {
                mid=(rt+lt)/2;
                if(a[i]<=b[mid]){
                    rt=mid-1;
                }
                else{
                    lt=lt+1;
                    cnt++;

                }
            }

           
          
//            res+=(lower_bound(b.begin(), b.end(), a[i]))-b.begin();
        }
        
        cout<<cnt<<"\n";
        cout<<"res = "<<res<<"\n";

    }


    return 0;
}

