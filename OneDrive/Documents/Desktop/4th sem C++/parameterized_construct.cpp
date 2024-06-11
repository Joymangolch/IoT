#include<iostream>
using namespace std;
class student{
	private:
		int a;
	public:
		student(int n){
			cout<<"Using a parameterized constructor.\n";
			n++;
			cout<<n<<"\n";
		}
};
int main(){
	student x(4);
	int num;
	cout<<"Enter any no. : "<<endl;
	cin>>num;
	student y(num),z(num+2),k;
}
