#include "convert.hpp"

int main(int argc, char *argv[]) {
	if (argc == 2) {
		std::string str = argv[argc-1];
		argument_type(str);
		return (0);
	}
	else {
		std::cout << "Error. Invalid number of arguments!" << std::endl;
		return -1;
	}
}