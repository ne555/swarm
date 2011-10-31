#include <valarray>
#include "particula.h"
#include "util.h"

using namespace std;

static double particle::coef_ganador, particle::coef_mejor, particle::alfa;
static particle::function particle::fitness;

void particle::particle(size_t dimension) :  
	posicion(dimension), velocidad(dimension) ,mejorpos(dimension),
	dimension(dimension){
}

void particle::inicializar(){
	posicion = math::random::random_vector<double>(dimension, -1, 1);	
	velocidad = math::random::random_vector<double>(dimension, -2, 2);	
	mejorpos = pos;
}


void particle::mover(const particle &ganador){
	vector 
		rm = math::random::random_vector<double>(dimension, 0, 1),
		rg = math::random::random_vector<double>(dimension, 0, 1);

	velocidad = alfa*velocidad + coef_mejor*rm*(mejorpos-posicion) + coef_ganador*rg*(ganador-posicion);
	posicion += velocidad;

	double fitness_actual = fitness(posicion);
	if( best_fitness < fitness_actual ){
		 best_fitness = fitness_actual;
		 mejorpos = posicion;
	}
}

