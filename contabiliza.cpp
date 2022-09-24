// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
	int i=0,l;
	float V_x,V_s=0;
	cout<<"ingrese el limite l="; cin>>l;
	do{
		
	cout<<"ingrese el numero V_x="; cin>>V_x;
	i=i+1;
	V_s=V_s+V_x;



	}while(i<l);
	cout<<"Se ingresaron "<<l<<" numeros "<< "que sumaron "<<V_s<<endl;
	return 0;



}
