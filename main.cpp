#include <iostream>
#include "Time.h"
#include <stdexcept>
using namespace std;

int main(){
	Time t;
	cout<<"Initial universal time: ";
	t.printUniversal();
	cout<<"\nInitial standard time: ";
	t.printStandard();
	t.setTime(13, 27, 6);
	cout<<"\n\nUniversal time after setTime: ";
	t.printUniversal();
	cout<<"\nStadard time after setTime: ";
	t.printStandard();
	
	try{
		t.setTime(99, 99, 99);
	}catch(invalid_argument &e){
		
		cout<<"Exception: "
			<<e.what()<<endl<<endl;
	}
	cout<<"\n\nAfter attempting"
		<<"invalid settings: "
		<<"\nUniversal time: ";
		t.printUniversal();
		cout<<"\nStandard time: ";
		t.printStandard();
		cout<<endl;
}
