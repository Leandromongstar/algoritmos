#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"\tRESOLVENDO EQUAÇÃO DE SEGUNDO GRAU"<<endl;
    cout<<"\tdigite as incognitas da equação:"<<endl;
int a,b,c;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
 cin>>c;

    cout<<"************************************************"<<endl;
 if(b<0){
    cout<<a<<"x²"<<"-"<<-b<<"x+"<<c<<endl;
 }else if(c<0){
    cout<<a<<"x²+"<<b<<"x-"<<-c<<endl;
 }else if(c>0 & b>0){
    cout<<"\n\t"<<a<<"x²+"<<b<<"x+"<<c<<endl;
 }
 cout<<"\n*****************************"<<endl;



double expoen=pow(b,2);
double delta=expoen-4*a*c;
if(delta>0){
cout<<"delta(positivo) é igual a:"<<delta<<endl;
}
else if(delta<0){
  cout<<"não existe uma raiz real negativa."<<endl;
}
return 0;
}

