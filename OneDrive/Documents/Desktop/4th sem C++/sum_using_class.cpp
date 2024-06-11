#include<iostream>
using namespace std;
class number{
	private:
		int a,b;
	public:
		void enter(){
			cout<<"Enter two number : ";
			cin>>a>>b;
		}
		void print(){
			cout<<"The sum of two number is : "<<a+b;
		}
		
};
int main(){
	number x;
	x.enter();
	x.print();
}
