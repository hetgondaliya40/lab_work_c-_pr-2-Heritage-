/*
6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
*/
#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
	 int contact;
	public :
		void setter()
		{
			cout<<"Enter id = ";
			cin>>id;
			cout<<"Enter name = ";
			cin>>name;
			cout<<"Enter role = ";
			cin>>role; 
		}
};
class B : public A{
	public : 
	void setter(){
		cout<<"Enter salary = ";
		cin>>salary;
		cout<<"Enter experience = ";
		cin>>experience;
	}
};
class C : public B{
	public :
		void setter(){
		cout<<"Enter company name =";
		cin>>comp_name;
		cout<<"Enter address =";
		cin>>address;
	}
	void getter(){
		cout<<"name = "<<name<<endl
		    <<"role = "<<role<<endl
		    <<"slary = "<<salary<<endl;
	}
};
class D : public C{
	public :
		
		void setter(){
			
			cout<<"ENTER E_MAIL"<<endl;
			cin>>email;
			cout<<"ENTER CONTACT"<<endl;
			cin>>contact;
		}
		void getter(){
			cout<<"id = "<<id<<endl
			    <<"name = "<<name<<endl
			    <<"role = "<<role<<endl
			    <<"salary ="<<salary<<endl
			    <<"experience ="<<experience<<endl
			    <<"company name = "<<comp_name<<endl
			    <<"email = "<<email<<endl
			    <<"contact = "<<contact<<endl;
		}
};
int main()
{
	D d;
	d.A::setter();
	d.B::setter();
	d.C::setter();
	d.D::setter();
	cout<<endl;
	d.getter();
}
