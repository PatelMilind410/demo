#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the n:";
     cin>>n;
     
     int i=1;
     while(i<=n){

         int j=1;
         while(j<=n-i+1)
         {
          cout<<j;
          j++;
         }
       int first=i-1;
       while(first){
          cout<<"**";
          first --;

       }
       // use cout in single * then use this loop
     //   int first=i-1;
     //   while(first){
     //      cout<<"*";
     //      first--;
     //   }
     int second=n-i+1;
     while(second){
          cout<<second;
          second--;
     }

         cout<<endl;
     i++;
     }
     
}