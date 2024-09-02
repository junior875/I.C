#include <stdbool.h>
#include <stdlib.h>

bool* sieve_of_eratosthenes(int limit) {
    bool* primes = malloc((limit + 1) * sizeof(bool));
    for (int i = 0; i <= limit; i++) primes[i] = true;

    primes[0] = primes[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= limit; i += p)
                primes[i] = false;
        }
    }
    return primes;
}
