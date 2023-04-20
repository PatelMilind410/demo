#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the n:";
     cin>>n;
    char ch='A';
     int i=0;
     while(i<n){
            int j=0;
          while(j<=i){
               //char ch='A';
                 ch=i +j+ 'A';
              cout<<ch<<" ";
              //ch ++;
              j++;
          }
          cout<<endl;
          i++;

     }
     
     return 0;
}