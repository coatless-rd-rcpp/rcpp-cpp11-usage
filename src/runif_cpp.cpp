#include <Rcpp.h>
#include <random>

//' Simulate Samples from a Uniform Distribution
//'
//' Generates random values from a uniform distribution using the C++ standard
//' library's `<random>` facilities, which have been part of standard C++ since
//' C++11.
//'
//' @param n     Number of observations to generate.
//' @param start Lower bound of the distribution.
//' @param end   Upper bound of the distribution.
//' @param seed  Seed for the random number generator.
//'
//' @return
//' A `numeric` vector of `n` draws from the Uniform(`start`, `end`)
//' distribution.
//'
//' @export
//' @examples
//' # Generate one draw
//' runif_cpp(1, start = 2, end = 20)
//'
//' # Generate two draws
//' runif_cpp(2, start = 5, end = 30)
// [[Rcpp::export]]
Rcpp::NumericVector runif_cpp(unsigned int n, double start = 0.0, double end = 1.0,
                              unsigned int seed = 183) {
  Rcpp::NumericVector u(n);

  std::mt19937_64 engine(seed);                          // Mersenne Twister engine
  std::uniform_real_distribution<double> u_dist(start, end);

  for (unsigned int i = 0; i < n; i++) {
    u[i] = u_dist(engine);
  }

  return u;
}
