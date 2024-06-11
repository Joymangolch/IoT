#include<iostream>
using namespace std;
class student{
	private:
		int a;
	public:
		void enter();
		void print();	
};
void student::enter(){
	cout<<"Enter any no. : ";
	cin>>a;
}
void student::print(){
	cout<<"Entered no. is : "<<a;
}
