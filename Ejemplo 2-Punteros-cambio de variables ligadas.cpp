#include <iostream>
using namespace std;

main(){
	int edad=25,*p_edad;
	p_edad=&edad;
	
	cout<<"Variable Edad:"<<edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;

	cout<<"------Cambiar valores-----"<<endl;
	edad=40;
	
	cout<<"Variable Edad:"<<edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	
	system("pause");
	
	
}
