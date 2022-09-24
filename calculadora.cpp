// creador: Francisco Garcia
#include<iostream>
using namespace std; 

int main()
{
float V_a,V_b,s,r,d,m;
cout<<"Ingrese el valor de V_a="; cin>>V_a;
cout<<"Ingrese el valor de V_b="; cin>>V_b;
s=V_a+V_b;
r=V_a-V_b;
d=V_a/V_b;
m=V_a*V_b;
cout<<"El resultado de la suma es: "<<V_a<<" + "<<V_b<<" = "<<s<<endl;
cout<<"El resultado de la resta es: "<<V_a<<" - "<<V_b<<" = "<<r<<endl;
cout<<"El resultado de la division es: "<<V_a<<" / "<<V_b<<" = "<<d<<endl;
cout<<"El resultado de la multiplicacion es: "<<V_a<<" * "<<V_b<<" = "<<m<<endl;

return 0;
}
