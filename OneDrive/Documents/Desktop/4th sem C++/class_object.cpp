#include<iostream>
using namespace std;
class addition{
	private:
		int a,b;
	public:
		void enter(){
			cout<<"Enter the first value : ";
			cin>>a;
			cout<<"Enter the second value : ";
			cin>>b;
		}
		void print(){
			cout<<"The sum of two number : "<<a+b;
		}
};
int main(){
	addition x;
	x.enter();
	x.print();
}
