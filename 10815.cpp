//
//  8983.cpp
//  algo
//
//  Created by 박효정 on 2021/05/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;

    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int>cmp(m);
  
    for(int j=0;j<m;j++){
        cin>>cmp[j];
    }
    //오름차 정렬
    //이분 탐색할 배열만
    sort(v.begin(), v.end());
    
   
    int mid;
    int index=0;
    vector<int>res(m);
    while(index<m){
        int lt=0;
        int rt=n-1;
        while(lt<=rt){
            mid=(lt+rt)/2;
            //기준 인덱스의 cmp배열 값보다 v[mid]값이 더 큰경우 ,찾고자 하는 cmp[index]값은 mid기준으로 더 왼쪽에 위치함
            if(v[mid]>cmp[index]){
                rt=mid-1;
            }
            //기준 인덱스의 cmp배열 값보다 v[mid]값이 더 작은경우 ,찾고자 하는 cmp[index]값은 mid기준으로 더 오른쪽에 위치함
            else if(v[mid]<cmp[index]){
                
                lt=mid+1;
            }
            //같은경우 
            else if(v[mid]==cmp[index]){
                
                res[index]=1;
                break;
                
            }
        }
        index++;
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
