#include "random.hh"
#include "laplace.hh"
#include <boost/random/laplace_distribution.hpp>

double laplace_rv(double scale, double location = 0) {
	return boost::random::laplace_distribution<double>(location, scale)(rng);
}
double laplace_mechanism(double true_answer, double sensitivity, double epsilon) {
	return true_answer + laplace_rv( sensitivity / epsilon );
}
