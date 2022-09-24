// creador: Francisco Garcia
#include<iostream>
using namespace std; 

int main()
{
float V_a,V_b,op_s,op_r,op_d,op_m;
cout<<"Ingrese el valor de V_a="; cin>>V_a;
cout<<"Ingrese el valor de V_b="; cin>>V_b;
op_s=V_a+V_b;
op_r=V_a-V_b;
op_d=V_a/V_b;
op_m=V_a*V_b;
cout<<"El resultado de la suma es: "<<V_a<<" + "<<V_b<<" = "<<op_s<<endl;
cout<<"El resultado de la resta es: "<<V_a<<" - "<<V_b<<" = "<<op_r<<endl;
cout<<"El resultado de la division es: "<<V_a<<" / "<<V_b<<" = "<<op_d<<endl;
cout<<"El resultado de la multiplicacion es: "<<V_a<<" * "<<V_b<<" = "<<op_m<<endl;

return 0;
}
