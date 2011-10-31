#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	srand( time(NULL) );
	enjambre e(100, fitness);
	
	simulator s(e);
	
	s.run(1000, &cout);
	
	return 0;
}

