#pragma once
#include <boost/random.hpp>
/*
 * sensitivity = 1 only for those values that are truly reported by each user as 0/1
 * sensitivity = X where X is the maximum amount/value an user can add to a computation
 * sensitivity = 1 in the case of recording the sites on which Content Blocking has been disabled
 * sensitivity = 14 (as per analysis in the documentation) in the case of number of manual refreshes per site
 *		on the top N sites
 * epsilon = 1 is a very high value, values for epsilon should be set according to the documentation
	    provided
 * N = number of users in the cohort that are going to report
 * M = number of users that are allowed to be malicious (where malicious was defined in the documentation) 
	in each cohort
 */
extern double gamma_mechanism(double true_val, double sensitivity, double epsilon, int N, int M, boost::mt19937& rng);
