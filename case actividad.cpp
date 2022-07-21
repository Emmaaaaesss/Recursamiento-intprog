#include <iostream>

using namespace std;


int main(){
	
		int numero, unidades, decenas, centenas, millares;
	cout<<"Digita un numero"<<endl;
	cin>>numero;
	
	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /= 10;
	centenas = numero%10; numero /= 10;
	millares = numero%10; numero /= 10;
	
	cout<<unidades<<endl;
	cout<<decenas<<endl;
	cout<<centenas<<endl;
	cout<<millares<<endl;
	
	switch(millares){
		case 1: cout<<"m";break;
		case 2: cout<<"mm";break;
		case 3: cout<<"mmm";break;
		
		
	}
		
		
		
	switch(centenas){
		case 1: cout<<"c";break;
		case 2: cout<<"cc";break;
		case 3: cout<<"ccc";break;
		case 4: cout<<"cd";break;
		case 5: cout<<"d";break;
		case 6: cout<<"dc";break;
		case 7: cout<<"dcc";break;
		case 8: cout<<"dcc";break;
		case 9: cout<<"cm";break;
	
	}
		
		
	switch(decenas){
		case 1: cout<<"x";break;
		case 2: cout<<"xx";break;
		case 3: cout<<"xxx";break;
		case 4: cout<<"xl";break;
		case 5: cout<<"l";break;
		case 6: cout<<"lx";break;
		case 7: cout<<"lxx";break;
		case 8: cout<<"lxxx";break;
		case 9: cout<<"xc";break;
	
	}
	
		
			
		
	switch(unidades){
		
		case 1: cout<<"i";break;
		case 2: cout<<"ii";break;
		case 3: cout<<"iii";break;	
		case 4: cout<<"iv";break;
		case 5: cout<<"v";break;
		case 6: cout<<"vi";break;
		case 7: cout<<"vii";break;
		case 8: cout<<"viii";break;
		case 9: cout<<"ix";break;		
	}
	return 0;

	
	
}
	

