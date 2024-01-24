/*
4. WAP to read and print employee information using multiple inheritance.
*/
#include<iostream>
using namespace std;

class Basic{
  public :
      string name;
      string company_name;
      string role;
      int age;
    public:
        void Setdata(){
         cout << "Enter Your name : " ;
          cin >> this->name;
          cout << "Enter your company name : ";
          cin >> this->company_name;
          cout << "Enter your role : ";
          cin >> this->role;
          cout << "Enter your age : ";
          cin >> this->age;
        }
};

class Advance{
      public:
        int salary;
        int contact_info;
    public:
        void SetData(){
          cout << "Enter your salary : ";
          cin >> this->salary;
          cout << "Enter your contact info : ";
          cin >> this->contact_info;
        }
};
class Output : public Advance , public Basic{
        public:
            void dispOut(){
              cout << "Name :- " << this->name << endl;
              cout << "Company name :- " << company_name << endl ;
              cout << "Role :- " << role << endl ;
              cout << "Age :- " << age << endl ;
              cout << "Salary :- " << salary << endl ;
              cout << "Contact info " << contact_info << endl;
            }
};

int main (){
  
  Output o;
  o.Setdata();
  o.SetData();
  o.dispOut();
  return 0;
}
