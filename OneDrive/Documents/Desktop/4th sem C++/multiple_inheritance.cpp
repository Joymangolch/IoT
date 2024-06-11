#include<iostream>
using namespace std;
class A{
	public:
		void print1(){
			cout<<"Hello1";
		}	
};
class B{
	public:
		void print2(){
			cout<<"\nHello2";
		}
};
class C: public B,public A{
	public:
		void print3(){
			cout<<"\nHello3";
		}
};
int main(){
	C x;
	x.print1();
	x.print2();
	x.print3();
}

