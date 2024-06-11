#include<iostream>
using namespace std;
class rapid{
	private:
    	int a;
	public:
		rapid(int n){
			n++;
			cout<<n<<"\n";
		}
};
int main(){
	rapid x(2),y(5);
}
