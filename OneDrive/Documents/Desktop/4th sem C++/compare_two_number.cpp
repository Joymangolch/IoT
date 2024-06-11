#include<iostream>
using namespace std;
class compare{
	private:
		int a,b;
	public:
		void input(){
			cout<<"Enter two number : ";
			cin>>a>>b;
		}
		void compares(){
			if(a>b){
				cout<< a << " is larger";
			}
			else{
				cout<< b << " is larger";
			}
		}
};
int main(){
	compare x;
	x.input();
	x.compares();
}
