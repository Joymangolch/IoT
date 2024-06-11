#include<iostream>
using namespace std;
class student{
	int a;
	public:
		student(int n=0){
			a=n;
		}
		void print(){
			cout<<a;
		}
		
};
int main(){
	student x(5),y(7),z;
	x.print();
	y.print();
}
