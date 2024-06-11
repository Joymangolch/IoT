#include<iostream>
using namespace std;
int add(int a,int b){
	cout<<"The sum = "<<(a+b);
}
int add(double a, double b){
	cout<<"The sum = "<<(a+b);
}
int main(){
	add(10,3);
	add(22.0,52.0);
}
