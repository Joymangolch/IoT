#include<iostream>
using namespace std;
class class1{
	private:
		int a;
	public:
		void enter(){
			cout<<"Enter a number : ";
			cin>>a;
		}
		friend void print(class1);
};
int main(){
	class1 b;
	b.enter();
	print(b);
}
void print(class1){
	cout<<"Using friend function!\n";
	cout<<z.a;
}
