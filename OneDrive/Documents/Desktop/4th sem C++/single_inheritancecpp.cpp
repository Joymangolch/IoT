#include<iostream>
using namespace std;
class A{
	private:
		void print1(){
			cout<<"Hello1";
		}
	public:
	 	void print2(){
	 		cout<<"Hello2";
		 }	
};
class B: private A{
	public:
		void print3(){
			cout<<"\nHello3";
		}
};
int main(){
	B x;
	x.print2();
	x.print3();
}
