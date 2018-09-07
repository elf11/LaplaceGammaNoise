#include <iostream>
#include <boost/random.hpp>
#include "laplace.hh"
#include "gamma.hh"

int main()
{
    std::cout << "Laplace DP" << std::endl;
    std::cout << laplace_mechanism(10000, 1, 0.01) << std::endl;

    boost::mt19937 gen;

    int N = 10000;
    int M = 500;

    double sum = 0;
    double gamma_noise = 0;

    for (int i = 0; i < N; i++) {
	sum += gamma_mechanism(1, 1, 0.01, N, M, gen);
    }

   std::cout << "Gamma DP" << std::endl;
   std::cout << sum << std::endl;

}
