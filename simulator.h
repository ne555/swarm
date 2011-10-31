#ifndef simulator_H
#define simulator_H

class simulator{
public:
	simulator(enjambre &e): e(e){}
	void run(size_t cant, std::ostream *out);
private:
	enajmbre &e;
};

#endif
