#include "Zombie.hpp"

int	main() {
	std::cout << "Testing Stack Zombie" << std::endl;
	randomChump("Voo");

	std::cout << "\nTesting Heap Zombie" << std::endl;
	Zombie* heapZ = newZombie("Doo");
	heapZ->announce();

	delete heapZ;

	return 0;
}
