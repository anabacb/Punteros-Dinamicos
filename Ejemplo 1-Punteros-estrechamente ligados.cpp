#include <iostream>
using namespace std;

main(){
	int edad=25,*p_edad;
	p_edad=&edad;
	
	cout<<"Edad:"<<edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad:"<<&p_edad<<endl;

	system("pause");
	
	
}
