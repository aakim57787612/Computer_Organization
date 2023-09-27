#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input, state[4] = { ", SN",", WN",", WT",", ST" }, now[8] = { ", SN",", SN", ", SN", ", SN", ", SN", ", SN", ", SN", ", SN"};
	int nown[8] = { 0,0,0,0,0,0,0,0 };
	int mis[8] = { 0,0,0,0,0,0,0,0 };
	int i = 0; int a2 = 0, a1 = 0, a0 = 0, a = 0; char m='N';
	cout << "Input: ";
	cin >> input;
	cout << endl;
	while (input[i] == 'N' || input[i] == 'T') {
		cout << "(" << a2 << a1 << a0;
		for (int j = 0; j < 8; j++) {
			cout << now[j];
		}
		cout << ")";
		if (input[i] == 'T') {
			nown[a]++;
			if (nown[a] > 3)
				nown[a] = 3;
		}
		else if (input[i] == 'N') {
			nown[a]--;
			if (nown[a] < 0)
				nown[a] = 0;
		}
		if (now[a] == ", SN" || now[a] == ", WN") {
			cout<<" N ";
			m = 'N';
		}
		else {
			cout << " T ";
			m = 'T';
		}
		now[a] = state[nown[a]];
		if (input[i] != m) {
			mis[a]++;
		}
		cout << input[i];
		cout << "  misprediction: " << mis[a] << endl;
		a2 = a1;
		a1 = a0;
		if (input[i] == 'T')
			a0 = 1;
		else if (input[i] == 'N')
			a0 = 0;
		a = a2 * 4 + a1 * 2 + a0 * 1;
		i++;
	}
}
