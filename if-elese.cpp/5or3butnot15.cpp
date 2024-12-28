#include<iostream>
using namespace std;
int main (){
cout<<"enter the number";
int n;
cin>> n;
// if((n%3==0 || n%5==0) && n%15!=0 ){
//     cout<<"the number is divisible by 3 or 5 but not 15";
// }
// else{
//     cout<<"the condition is not matching";
// }
if(n%5==0 || n%3==0){
    if(n%15!=0){
        cout<<"the number is divisible by 5 or 3 but not 15";
    }
    else{
        cout<<"not matching condition";    
    }
}
else{
    cout<<"not matching condition";
}

}