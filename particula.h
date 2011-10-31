#ifndef particula_H
#define particula_H

#include <valarray>

class particle{
public:
	typedef std::valarray<double> vector;
	typedef double (*function)(vector);

	particle(size_t dimension);
	void inicializar();

	inline const vector& value() const{
		return function(posicion);
	}

	void mover(const particle &mejor);

	static double coef_ganador, coef_mejor, alfa;
	static function fitness;
	
private: 
	vector posicion, velocidad, mejorpos;
	size_t dimension;
	double best_fitness;

};

#endif
