#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

	// declare vector
	vector<int> foo(20);

	// populate
	iota(foo.begin(), foo.end(), 1);

	// iterator and output
	for (vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
		cout << *it << " " << flush;

	cout << endl;

	cin.get();

}