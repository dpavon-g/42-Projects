#include "serialize.hpp"

serialize::serialize() {
    std::cout << "Default constructor called" << std::endl;
}

serialize::~serialize() {
    std::cout << "Default destructor called" << std::endl;
}

void* serialize::serial(Data *ptr) {
    return static_cast<void*>(ptr);
}

Data* serialize::deserial(void* raw) {
    return static_cast<Data*>(raw);
}

