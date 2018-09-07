#include <boost/random/gamma_distribution.hpp>
#include "gamma.hh"

double gamma_rv(double shape, double scale, boost::mt19937& gen) {
	boost::gamma_distribution<> gd(shape);

	return scale * gd(gen);
}

double gamma_mechanism(double true_val, double sensitivity, double epsilon, int N, int M, boost::mt19937& gen) {
	int i = 0;
	double sum = 0;
	for (i = 0; i < N; i++)
		sum = (gamma_rv(N-M, sensitivity / epsilon, gen) - gamma_rv(N-M, sensitivity / epsilon, gen));

	sum = sum / N;

	return true_val + sum;

}
