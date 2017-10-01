#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

	// declare vector
	vector<int> foo(25);

	// populate
	iota(foo.begin(), foo.end(), 1);

	// sort with lambda expression to reverse order
	sort(foo.begin(), foo.end(), [](const int& a, const int& b) { return a > b; });

	// iterator and output
	for (vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
		cout << *it << " " << flush;

	cout << endl;

	cin.get();

	return 0;

}