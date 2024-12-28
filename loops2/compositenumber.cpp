#include<iostream>
using namespace std;
int main(){
int n;
cout<<"entern a number :";
cin>>n;
for(int i=2;i<=n-1;i++){
  if(n%i==0){
    cout<<n<<"is composite no"<<endl;  

  }
    break;
}
// 2 3 4 5 6 10 12 15 20 30 60 
}

