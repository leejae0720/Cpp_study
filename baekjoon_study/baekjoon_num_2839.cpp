#include <iostream>

using namespace std;
int input;

int main() {
	cin >> input;

	int output = 0;
	while (input>=0) {
		if (input % 5 == 0){
			output = output + (input / 5);	
			cout << output << endl;
            return 0;
		}
		input = input - 3;	
		output++;	
	}
    cout << "-1" << endl;

    return 0;
}