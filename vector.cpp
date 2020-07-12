#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5,6};
	for (auto& i:a) i+=2;
	for (auto& i:a) cout << i << endl;
	return 0;
}
