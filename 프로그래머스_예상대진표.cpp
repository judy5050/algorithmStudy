//
//  프로그래머스_예상대진표.cpp
//  algo
//
//  Created by 박효정 on 2021/09/15.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, int a, int b)
//{
//    int answer = 0;
//    vector<int>v(n+1,0);
//
//
//    int cnt=n/2;
//       while(1){
//
//           bool ch=false;
//           int A,B;
//           int pos=1;
//           for(int i=1;i<=cnt;){
//               //게임 한 세트
//               while(v[pos]!=0){
//                pos++;
//               }
//               A=pos++;
//               while(v[pos]!=0){
//                pos++;
//               }
//               B=pos++;
//               i++;
//               if((a==A||b==A)&&(b!=B&&a!=B)){
//                   v[A]=1;
//                   v[B]=-1;
//               }else if((a==B||b==B)&&(b!=A&&a!=A)){
//                   v[B]=1;
//                   v[A]=-1;
//               }else if(a!=A&&b!=B){
//                   v[A]=1;
//                   v[B]=-1;
//               }else{
//                   v[A]=1;
//                   v[B]=-1;
//                   ch=true;
//                   break;
//               }
//           }
//           if(ch==true){
//               answer++;
//               break;
//           }
//           answer++;
//          for(int i=1;i<=n;i++){
//              if(v[i]==1){
//                  v[i]=0;
//              }
//          }
//
//          cnt/=2;
//
//
//       }
//
//
//
//    return answer;
//}

#include <iostream>
#include <vector>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    for(int i=0;i<n;i++){
       
        if(a%2==1) a++;
        if(b%2==1) b++;
        a/=2;
        b/=2;

      

         if(a==b){
            answer++;
            break;
        }
      
       
        answer++;
        
    }

   

    return answer;
}
