#ifndef enjambre_H
#define enjambre_H


class enjambre {
public:
	typedef vector<particle> swarm;
	
	enjambre(size_t dim, size_t size);
	void mover();
	
private:
	swarm s;
	size_t size;

	double best_fitness;
	particle best;

	void inicializar_particulas();
};

#endif
