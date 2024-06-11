#include<iostream>
using namespace std;
int add(int x, int y){
	int z;
	cout<<"The sum is = "<<(z=x+y);
	return z;
}
int add(double x,double y){
	double z;
	cout<<"\nThe sum is = "<<(z=x+y);
	return z;
}
int main(){
	add(5,7);
	add(10.0,20.0);
}

