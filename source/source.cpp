#include <iostream>
#include <fstream>

#include "myheader.h"

using namespace std;

int main() {

	ofstream file("generated_out.txt");
	file << "hello gago\n";
	file << mysum(5, 2) << endl;

	return 0;
}