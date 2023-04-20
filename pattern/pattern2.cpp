#include<iostream>
using namespace std;

int main() {
     int n,count=1;
     cout<<"enter the n:= ";
     cin>> n;

     int row=1;
     while(row<=n){
          int col=1;
          while(col<=row){
                cout<<count<<" ";
                count++;
                col++;

          }
          cout<<endl;
          row++;
     }


     
}