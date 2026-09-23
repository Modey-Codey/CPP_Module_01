#include "Zombie.hpp"

int main() {
	int N = 5;

	std::cout << " Creating a horde of " << N << " zombie " << std::endl;

	Zombie* horde = zombieHorde(N, "White Walkers");

	if (horde != NULL) {
		for (int i = 0; i < N; i++) {
			horde[i].announce();
		}

		std::cout << "\nDestroying the horde" << std::endl;

		delete [] horde;
	}

	return 0;
}
