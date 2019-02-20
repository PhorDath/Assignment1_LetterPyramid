#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string base; // this string is the user's input that will become the base of the pyramid
	cin >> base;//

	//string base_copy = base;
	//reverse(base_copy.begin(), base_copy.end()); // reverse the copy of base
	//base_copy.erase(0, 1); // erase the first element
	//base += base_copy; // now we have the base propelly done

	//string aux(base.size(), ' '); // this empity string will be a kind of size template
	//cout << base;

	int len = base.size();
	int whitespaces{ len - 1 }; // store the amount of whitespaces to print before start to print the pyramid structure
	int amount{ 0 }; // store the amount of the string we have to print in each level

	for (size_t i{ 0 }; i < base.size(); i++) {
		// print whitespace		
		for (int j{ whitespaces }; j >= 0; j--) {
			cout << " ";
		}
		whitespaces--;
		
		// print pyramid structure
		// the first for will print the normal order of the string until it arrive in the middle
		for (int j{ 0 }; j < amount; j++) {
			cout << base.at(j);
		}
		amount += 1;
		// the second for will print the inverted part of the pyramid level
		for (int j{ amount - 1 }; j >= 0; j--) {
			cout << base.at(j);
		}

		cout << endl;
	}



	return 0;
}