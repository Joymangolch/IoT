#include<iostream>
using namespace std;
class A{
	public:
		void print1(){
			cout<<"\nHello1";
		}
};
class B:public A{
	public:
		void print2(){
			cout<<"\nHello2";
		}
};
class C : public A{
	public:
		void print3(){
			cout<<"\nHello3";
		}
};
int main(){
	C x;
	x.print1();
	x.print3();
	B y;
	y.print1();
	y.print2();
}
