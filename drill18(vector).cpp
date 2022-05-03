#include "std_lib_facilities.h"

vector<int> gv = { 1,2,4,8,16,32,64,128,256,512 };

int fact(int n) {
	return n > 1 ? n*(fact(n-1)) : 1;
}

void f(vector<int>& v) {
	vector<int> lv(10);
	lv = v;

	cout << "---------------------------------------"<<endl;
	for (int i = 0; i < 10; i++)
		cout << "lv[" << i << "]= " << lv[i] << endl;

	vector<int> lv2;
	lv2 = v;

	cout << "---------------------------------------"<<endl;
	for (int i = 0; i < 10; i++)
		cout << "lv2[" << i << "]= " << lv[i] << endl;

}

int main() {
	f(gv);

	
	
	vector<int> vv = { 1,fact(2),fact(3),fact(4),fact(5),fact(6),fact(7),fact(8),fact(9),fact(10)};
	f(vv);
	
	return 0;
}