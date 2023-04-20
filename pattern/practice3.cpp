#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter then:";
     cin>>n;
int count =1;
     int i=1;
     while(i<=n){
          int space;
          space=n-i+1;
          while(space)
          {
               cout<<" ";
               space--;

     }
      int j=1;
        
      while( j<=i)
      {
          cout<<count;
          count ++;
          j++;
      }
          
        cout<<endl;
        i++;  
     }



     return 0;

}