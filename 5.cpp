/*
5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
*/
#include<iostream>
using namespace std;

class main{
	public:
		int number;
		input(){
			cout << "Enter any number = ";
			cin >> number;
		}
};
class Squ : public main {
	public:
		int squa;
	 
		squr(){
			cout << endl << "Square is :- " << 	number * number << endl;
		}
};
class Cube : public main{
	public:
		int cube;
	 
		print(){
			cout << endl << "Cube is :- " << number * number * number << endl;
		}
};

int main (){
	Cube c;
	
	c.input();
	c.print();
	
	
}
