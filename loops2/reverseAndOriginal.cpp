#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter a digit";
cin>>n;
 int lastdigit=0;
int reverse=0;
int x=n;
 while(n>0){
  lastdigit= n%10;
  reverse*=10;
  reverse+=lastdigit;
  n/=10;
 }
 
 cout<<reverse+x;


}