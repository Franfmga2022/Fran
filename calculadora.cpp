// creador: Francisco Garcia
#include<iostream>
using namespace std; 

int main()
{
float x,y,s,r,d,m;
cout<<"Ingrese el valor de x="; cin>>x;
cout<<"Ingrese el valor de y="; cin>>y;
s=x+y;
r=x-y;
d=x/y;
m=x*y;
cout<<"El resultado de la suma "<<x<<" + "<<y<<" = "<<s<<endl;
cout<<"El resultado de la resta "<<x<<" - "<<y<<" = "<<r<<endl;
cout<<"El resultado de la division "<<x<<" / "<<y<<" = "<<d<<endl;
cout<<"El resultado de la multiplicacion "<<x<<" * "<<y<<" = "<<m<<endl;

return 0;
}
