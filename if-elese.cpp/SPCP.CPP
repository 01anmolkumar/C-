#include<iostream>
using namespace std;
int main (){
cout<<"enter the cost price :";
int cp;
cin>>cp;
cout<<"enter the selling price :";
int sp;
cin>>sp;
if(sp>cp){
    cout<<"profit = "<<sp-cp;
}
if(sp>cp){
cout<<"profit";
}
if(sp<cp){
    cout<<"loss = "<<cp-sp;
}
else{
    cout<<"no profit,no loss";
}

}