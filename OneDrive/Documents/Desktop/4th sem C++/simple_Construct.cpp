#include<iostream>
using namespace std;
class simple{
	private:
		int a;
	public:
		simple(){
			cout<<"Using a simple constructor";
			cout<<"\n An object is created."<<endl;
		}
};
int main(){
	simple a,b;
}
