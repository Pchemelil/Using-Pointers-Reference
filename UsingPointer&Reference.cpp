#include <iostream>
using namespace std;

int main(){
	int*pointer;
	int num = 5;
	
	pointer= &num;
	
	cout<<"The pointer is displaying the memory address of num:" <<endl;
	/*using an '*' again it will dereference the pointer and 
	will cause the values of the memory address to be displayed*/
	cout<< pointer <<endl;
	cout<<"pointer after derefernecing:\n";
	//dereferencing is being done here.
	cout<< *pointer;
}
