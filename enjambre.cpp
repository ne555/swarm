#include <limits>
#include "enjambre.h"

using namespace std;

enjambre::enjambre(size_t dim, size_t size): swarm(size, particle(dim)), size(size){
	inicializar_particulas();
	best_fitness = numeric_limits<double>::min();
}

void enjambre::inicializar_particulas(){
	for(size_t K=0; K<size; ++K)
		s[K].inicializar();

	update();
}

void enjambre::mover(){
	for(size_t K=0; K<size; ++K)
		s[K].mover( ganador );
	update();
}

void enjambre::update(){
	for(size_t K=0; K<size; ++K){
		double eval = s[K].value();
		if( best_fitness < eval ){
			best_fitness = eval;
			best = s[K];
		}
	}
}


