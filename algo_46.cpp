//
//  algo_46.cpp
//  algo
//
//  Created by 박효정 on 2021/04/09.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,t,bp,res,cnt;
int num;
int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin>>n;
    vector<int>v(n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    cin>>t;
    
    while(1){

        cnt++;
        if(cnt>n){
            cnt=1;
        }
        if(v[cnt]!=0){
            bp++;
            v[cnt]--;
           

        }
        else if(v[cnt]==0){
            num++;
        }
        if(bp==t){
            break;
        }
        if(num==n){
            break;
        }

    }

    if(num==n){
        cout<<-1<<"\n";
    }
    else{
        cout<<cnt<<"\n";
    }



    return 0;
}
