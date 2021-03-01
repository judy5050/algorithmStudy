//
//  2231.cpp
//  algo
//
//  Created by 박효정 on 2021/03/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num;
int res;
int com;
int input;
int check(int a,int b){
    
    if(a==b){
        return 1;
    }
    else
        return 0;
    
}



int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    
    
    cin>>num;
    
    for(int i=0;i< num;i++){
        
        if(0<=i&&i<10){
            
            input=i;
            com= check(num, input);
            res=i;
            
            
        }
        else if(i>=10&&i<100){
            
            input=(i/10)+(i%10)+i;
            com=check(num,input);
            res=i;
            
        }
        else if(i>=100&&i<1000){
            input =(i/100)+(i%100/10)+(i%100%10)+i;
            com=check(num, input);
            res=i;
        }

        else if(i>=1000&&i<10000){
            input =(i/1000)+(i%1000/100)+(i%1000%100/10)+(i%1000%100%10)+i;
            com=check(num, input);
            res=i;
        }
        
        else if(i>=10000&&i<100000){
            input =(i/10000)+i%10000/1000+i%10000%1000/100+i%10000%1000%100/10+i%10000%1000%100%10+i;
            com=check(num, input);
            res=i;
        }

        else if(i>=100000&&i<1000000){
            input=(i/100000)+i%100000/10000+i%100000%10000/1000+i%100000%10000%1000/100+i%100000%10000%1000%100/10+i%100000%10000%1000%100%10+i;
            com=check(num, input);
            res=i;
        }
        else if(i==1000000){
            input=(i/1000000)+(i%1000000/100000)+(i%1000000%100000/10000)+(i%1000000%100000%10000/1000)+(i%1000000%100000%10000%1000/100)+(i%1000000%100000%10000%1000%100/10)+(i%1000000%100000%10000%1000%100%10)+i;
            com=check(num, input);
            res=i;
        }
        if(com==1){
            cout<<res<<"\n";
            break;
        }
        
    }
    if(com==0){
        cout<<0<<"\n";
    }
    
    
    
    
    
    
    
    
    return 0;
}
