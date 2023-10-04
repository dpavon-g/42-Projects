#include "Span.hpp"

Span::Span(unsigned int n): _maxIntegers(n) {
    std::cout << "Number <Span> constructor called" << std::endl;
}

Span::Span(): _maxIntegers(0) {
    std::cout << "Default empty <Span> constructor called" << std::endl;
}

void    Span::addNumber(int n) {
    if (this->_vec.size() >= this->_maxIntegers) {
        throw::std::runtime_error("Error. Too much numbers!!");
        return;
    }
    this->_vec.push_back(n);
    return;
}

int Span::shortestSpan() {
    for (std::size_t i = 0; i < this->vec.size(); i++) {
        
    }
}

Span::~Span()
{
    std::cout << "Default destructor called" << std::endl;
}