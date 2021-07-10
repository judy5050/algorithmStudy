//
//  프로그래머스_숫자 문자열과 영단어.cpp
//  algo
//
//  Created by 박효정 on 2021/07/10.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
   
    
    string s="2000000000";
    int answer = 0;
       string res="";
       string tmp="";
       for(int i=0;i<s.size();){
          
           while(s[i]>='a'&&s[i]<='z'){
              
                   if(tmp=="one"){
                       res+='1';
                       tmp="";
                   }else if(tmp=="two"){
                       res+='2';
                       tmp="";
                   }else if(tmp=="three"){
                       res+='3';
                       tmp="";
                   }else if(tmp=="four"){
                       res+='4';
                       tmp="";
                   }else if(tmp=="five"){
                       res+='5';
                       tmp="";
                   }else if(tmp=="six"){
                       res+='6';
                       tmp="";
                   }else if(tmp=="seven"){
                       res+='7';
                       tmp="";
                   }else if(tmp=="eight"){
                       res+='8';
                       tmp="";
                   }else if(tmp=="nine"){
                       res+='9';
                       tmp="";
                   }else if(tmp=="zero"){
                       res+='0';
                       tmp="";
                       
                   }
                   
                
               
               tmp+=s[i++];
              

           }
           if(tmp!=""){
               
               if(tmp=="one"){
                   res+='1';
                   tmp="";
               }else if(tmp=="two"){
                   res+='2';
                   tmp="";
               }else if(tmp=="three"){
                   res+='3';
                   tmp="";
               }else if(tmp=="four"){
                   res+='4';
                   tmp="";
               }else if(tmp=="five"){
                   res+='5';
                   tmp="";
               }else if(tmp=="six"){
                   res+='6';
                   tmp="";
               }else if(tmp=="seven"){
                   res+='7';
                   tmp="";
               }else if(tmp=="eight"){
                   res+='8';
                   tmp="";
               }else if(tmp=="nine"){
                   res+='9';
                   tmp="";
               }else if(tmp=="zero"){
                   res+='0';
                   tmp="";
                   
               }
              
               
           }
          
           if(s[i]>='1'&&s[i]<='9'){
               res+=s[i++];
           }
          
            
           
           
           
           
           
           
       }
       
       
    answer=stoi(res);
    cout<<answer<<"\n";
    
    
    
    
    return 0;
}
