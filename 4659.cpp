//
//  4659.cpp
//  algo
//
//  Created by 박효정 on 2021/09/17.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    while(1){
        string s;
        cin>>s;
        if(s=="end"){
            break;
        }
        
        bool ch1=false;
        bool ch2=false;
        bool ch3=false;
        int cnt3=0;
        char c2=' ';
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                ch1=true;
            }
            char c=s[i];
            int za=0;
            int mo=0;
            if(i+2<s.size()){
                for(int j=i+1;j-i<3;j++){
                    if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')&&(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
                        mo++;
                    }
                    if((c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')&&(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u')){
                        za++;
                    }
                }
               
            }
            if(za>=2||mo>=2){
                ch2=true;
            }
           
            if(c2==s[i]&&c2!='e'&&c2!='o'){
                ch3=true;
            }
            c2=s[i];
        }
        if(cnt3>=2){
            ch3=true;
        }
        if(ch1==true&&ch2==false&&ch3==false){
            cout<<'<'<<s<<'>'<<" is acceptable."<<"\n";
        }else{
            cout<<'<'<<s<<'>'<<" is not acceptable."<<"\n";
        }
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
