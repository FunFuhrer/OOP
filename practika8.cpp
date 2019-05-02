#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream fout("a.txt");
	char c = 0;

	while (c != '\n') {
		cin.get(c);
		fout << c;
	}

	fout.close();

	ifstream fin("a.txt");

	while (!fin.eof()) {
		string s;
		fin >> s;
		cout << s << endl;
	}

	fin.close();

	system("pause");
	return 0;
}