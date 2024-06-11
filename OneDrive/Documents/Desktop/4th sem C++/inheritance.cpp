#include<iostream>
using namespace std;
class vehicle{
	public:
		void car(){
			cout<<"Car has four wheels";
		}
};
class bike: public vehicle{
	public:
		void ducati(){
			cout<<"\nDucati is very fast";
		}
};
class scooter: public bike{
	public:
		void pleasure(){
			cout<<"\nScooter has two wheels";
		}
};
int main(){
	scooter gari;
	gari.car();
	gari.ducati();
	gari.pleasure();
}
