#include<iostream>
using namespace std;
class complexnumber{
  private:
         double real;
		 double img;
		 
		 
public:
 		complexnumber(double r, double i)
		{
		 	real = r;
			 img=i; 
		}	
		complexnumber operator+(const complexnumber& other)
		{
			double newreal = real+other.real;
			double newimg = img + other.img;
			return complexnumber(newreal, newimg);
		}
		
		void display() const{
		cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complexnumber complex1(1.4,5.6);
	complexnumber complex2(3.5,8.7);
	
	complexnumber sum= complex1 + complex2;
	
	cout<<"the sum of two complex number is: ";
	sum.display();
	
	return 0;
}
