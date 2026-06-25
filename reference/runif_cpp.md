# Simulate Samples from a Uniform Distribution

Generates random values from a uniform distribution using the C++
standard library's `<random>` facilities, which have been part of
standard C++ since C++11.

## Usage

``` r
runif_cpp(n, start = 0, end = 1, seed = 183L)
```

## Arguments

- n:

  Number of observations to generate.

- start:

  Lower bound of the distribution.

- end:

  Upper bound of the distribution.

- seed:

  Seed for the random number generator.

## Value

A `numeric` vector of `n` draws from the Uniform(`start`, `end`)
distribution.

## Examples

``` r
# Generate one draw
runif_cpp(1, start = 2, end = 20)
#> [1] 16.56711

# Generate two draws
runif_cpp(2, start = 5, end = 30)
#> [1] 25.23210 15.99768
```
