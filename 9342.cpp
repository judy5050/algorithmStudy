//
//  9342.cpp
//  algo
//
//  Created by 박효정 on 2021/09/19.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        bool ch1=false;
        bool ch2=false;
        bool ch3=false;
        bool ch4=false;
        bool ch5=false;
        
        int cnt1=0;
        int cnt2=0;
        int cnt3=0;
        int cnt4=0;
        int cnt5=0;
        if(s[0]=='A'||s[0]=='B'||s[0]=='C'||s[0]=='D'||s[0]=='E'||s[0]=='F'){
            cnt1++;
        }
        
        if(cnt1==0||cnt1==1){
            ch1=true;
        }
        
        int pos=0;
        if(s[0]!='A'){
            pos=1;
        }
        while(s[pos]=='A'){
            cnt2++;
            pos++;
        }
        if(cnt2>=1){
            ch2=true;
        }
        while(s[pos]=='F'){
            cnt3++;
            pos++;
        }
        if(cnt3>=1){
            ch3=true;
        }
        while(s[pos]=='C'){
            cnt4++;
            pos++;
        }
        if(cnt4>=1){
            ch4=true;
        }
        
        if(cnt4>=1&&pos==s.size()){
            ch5=true;
        }else
            if(s[pos]=='A'||s[pos]=='B'||s[pos]=='C'||s[pos]=='D'||s[pos]=='E'||s[pos]=='F'){
            cnt5++;
        }
        if(cnt5>=1&&pos==s.size()-1){
            ch5=true;
        }
        
        if(ch1&&ch2&&ch3&&ch4&&ch5){
            cout<<"Infected!"<<"\n";
        }else{
            cout<<"Good"<<"\n";
        }
        
        
    }
    
    
    
    
    
    
    return 0;
}
