#include <iostream>
using namespace std;

class Car {
      
    char model;
    int year;
public:
       
	void start(){
		cout << "start the car by sitting in it " << endl;
	}
	void stop(){
		cout << "stop the car by sitting in it " << endl;
	}
	
           };
int main(){
     	Car honda;
		char a;
		cout << "enter  'Y' to enter the car  "<<endl;
		cin >> a;
		
        if (a == 'Y' ) honda.start();  
	    else  honda.stop(); 
	return 0;
}









