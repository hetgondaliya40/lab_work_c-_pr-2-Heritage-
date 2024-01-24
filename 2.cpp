/*
2. WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther). In the main define a daughter and call the display() method on it.
*/
#include <iostream>
using namespace std;

class Mother{
  public:
    void getdata(){
      cout << "This massage from mother class...." << endl;
    }
};
class Douther : public Mother{
  public:
      void getData(){
      cout << "This massage from douther class..... " << endl;
        }
};

int main() {
    Douther d;
      d.getdata();
      d.getdata();
  return 0;
}
