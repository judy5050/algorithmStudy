//
//  20436.cpp
//  algo
//
//  Created by 박효정 on 2021/08/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
  
    vector<pair<int, int>>v['z'-'a'+1];

    //키보드 판 만들기
    v['q'-'a'].push_back({0,0});
    v['w'-'a'].push_back({0,1});
    v['e'-'a'].push_back({0,2});
    v['r'-'a'].push_back({0,3});
    v['t'-'a'].push_back({0,4});
    v['y'-'a'].push_back({0,5});
    v['u'-'a'].push_back({0,6});
    v['i'-'a'].push_back({0,7});
    v['o'-'a'].push_back({0,8});
    v['p'-'a'].push_back({0,9});
    v['a'-'a'].push_back({1,0});
    v['s'-'a'].push_back({1,1});
    v['d'-'a'].push_back({1,2});
    v['f'-'a'].push_back({1,3});
    v['g'-'a'].push_back({1,4});
    v['h'-'a'].push_back({1,5});
    v['j'-'a'].push_back({1,6});
    v['k'-'a'].push_back({1,7});
    v['l'-'a'].push_back({1,8});
    v['z'-'a'].push_back({2,0});
    v['x'-'a'].push_back({2,1});
    v['c'-'a'].push_back({2,2});
    v['v'-'a'].push_back({2,3});
    v['b'-'a'].push_back({2,4});
    v['n'-'a'].push_back({2,5});
    v['m'-'a'].push_back({2,6});
    
    
    char l,r;
    
    cin>>l>>r;
    string s;
    cin>>s;
    
    int res=0;
    pair<int, int>rh;
    pair<int, int>lh;
    
    lh.first=v[l-'a'].front().first;
    lh.second=v[l-'a'].front().second;
    
    rh.first=v[r-'a'].front().first;
    rh.second=v[r-'a'].front().second;

    int row,col;
    for(int i=0;i<s.size();i++){
        row=v[s[i]-'a'].front().first;
        col=v[s[i]-'a'].front().second;
        //왼손 입력가능 알파벳 범위
        if((0<=row&&row<=1&&col>=0&&col<=4)||(row==2&&col>=0&&col<=3)){
            res+=abs(row-lh.first)+abs(col-lh.second);
            lh.first=row;
            lh.second=col;
            res++;
        }else{
            res+=abs(row-rh.first)+abs(col-rh.second);
            rh.first=row;
            rh.second=col;
            res++;
        }
    }
    
    
        
        cout<<res<<"\n";
    
    
    
    
    
    return 0;
}
