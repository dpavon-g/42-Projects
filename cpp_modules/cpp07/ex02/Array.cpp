#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0) {
    std::cout << "Default <Array> constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
    std::cout << "Integer <Array> constructor called" << std::endl;
    _elements = new T[n];
    int i = 0;
    while (i < _size) {
        _elements[i] = 0;
        i++;
    }
}

template <typename T>
Array<T>::Array(const Array& copy) : _size(copy._size) {
    _elements = new T[_size];
    int i = 0;
    while (i < _size) {
        _elements[i] = copy._elements[i];
        i++;
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] _elements;
        _size = other._size;
        _elements = new T[_size];
        int i = 0;
        while (i < _size) {
            _elements[i] = other._elements[i];
            i++;
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _elements[index];
}

// template <typename T>
// unsigned int Array<T>::size();
// {
//     return _size; 
// }

template <typename T>
Array<T>::~Array() {
    delete[] _elements;
}
