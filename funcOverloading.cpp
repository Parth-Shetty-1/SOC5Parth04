#include <iostream>
using namespace std;

class Calculator{
	private:
		int num;
	public:
		float add(float x,float y){
			return x + y;
		}

		float add(float x,float y,float z){
			return x+y+z;
		}
	};

int main(){
	Calculator c;
	cout<<"Result ="<<c.add(6,7)<<endl;
	cout<<"Result ="<<c.add(7,8,9)<<endl;
	return 0;
}
