#include<iostream>
using namespace std;
class student
{
private:
	int numberofbook;
	
public:
	library(int numofbooks)
	{
		numberofbooks = numofbooks;
		cout<<"library created with "<< numberofbooks <<"books."<<endl;
	}
	
	~library(){
		cout<<"library with "<<numberofbooks <<"books is being destroyed."<<endl;
	}
	
	void display()
	{
		cout<<"number of books in the library: "<<numberofbooks <<endl;
	}
};
int main()
{
	library lib1(1000);
	
	lib1.display();
	
	return 0;
}
