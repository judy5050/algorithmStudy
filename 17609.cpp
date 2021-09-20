//
//  17609.cpp
//  algo
//
//  Created by 박효정 on 2021/09/20.
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
        int lt=0;
        int rt=(int)s.size()-1;
        int cnt=0;
        bool ch1=true;
        bool ch2=false;
        while(lt<=rt){
            if(s[lt]==s[rt]){
                lt++;
                rt--;
            }else{
               
                //유사 회문인경우
                if(cnt<1&&s[lt]==s[rt-1]){
                    cnt++;
                    ch2=true;
                    lt++;
                    rt-=2;
                }else if(cnt<1&&s[lt+1]==s[rt]){
                    cnt++;
                    lt+=2;
                    rt--;
                    ch2=true;
                }else{
                    ch1=false;
                    break;
                }
            }
        }
        if(ch1==true&&ch2==false){
            cout<<0<<"\n";
        }else if(ch1==true&&ch2==true){
            cout<<1<<"\n";
        }else if(ch1==false){
            ch1=true;
            ch2=false;
            lt=0;
            cnt=0;
            rt=(int)s.size()-1;
            while(lt<=rt){
                if(s[lt]==s[rt]){
                    lt++;
                    rt--;
                }else{
                   if(cnt<1&&s[lt+1]==s[rt]){
                        cnt++;
                        lt+=2;
                        rt--;
                        ch2=true;
                    }else{
                        ch1=false;
                        break;
                    }
                }
            }
            if(ch1==true&&ch2==false){
                cout<<0<<"\n";
            }else if(ch1==true&&ch2==true){
                cout<<1<<"\n";
            }else{
                cout<<2<<"\n";
            }
            
        }
        
       
        
    }
    
    
    
    
    
    
    return 0;
}
