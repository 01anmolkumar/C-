#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter a digit";
cin>>n;
int lastdigit=0;
int sum=0;
while(n>0){
    lastdigit=n%10;
    if(lastdigit%2==0) sum+=lastdigit;
    n/=10;
}
cout<<sum;
}