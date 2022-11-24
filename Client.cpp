#include "Head.h"
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	/*if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream inputFile(argv[1]);
	ofstream outputFile(argv[2]);*/
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	cout << "Start" << endl;
	Head* c= new Head();
	c->input(inputFile);
	outputFile << "Filled container. " << endl;
	c->output(outputFile);
	c->Clear();
	auto cur = c->sort();
	delete c;
	c = cur;
	outputFile << "Sorted container. " << endl;
	c->output(outputFile);
	outputFile << "Empty container. " << endl;
	c->output(outputFile);
	cout << "Stop" << endl;
	return 0;
}
