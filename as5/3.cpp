#include<iostream>
using namespace std;
class car
{
private:
	string make;
	string model;

public:
	 
	 car(){
	 	make ="tata";
	 	model="xuv";
	 }
	 car(string m,string mo)
	 {
	 	make=m;
	 	model=mo;
	 }
	 void display()
      {
      	cout<<"car make: "<<make <<endl;
      	cout<<"car model: "<<model <<endl;
	  }
	
};
int main()
{
	car car1;
	
	car car2("toyota","neel");
	cout<< "car 1:"<<endl;
	car1.display();
	cout<< endl;
	 
	 cout<<"car 2: "<<endl;
	 car2.display();
	 
	 return 0;
}
