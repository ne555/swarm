#include <iostream>
#include "simulator.h"
#include "enjambre.h"
#include "fitness.h"

using namespace std;


void simulator::run(size_t cant, ostream *out){
	for(size_t K=0; K<cant; ++K){
		e.moverse();
		if(out){ 
			(*out) << fitness << ' ' <<setprecision(10)<<"x : "<< <<" y : "<<" "<< << endl;
		}
		//cerr << K << ' ';
		//p.print();
		//cerr << endl;
	}
}
