#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
	private:
		T* _elements;  // Puntero al array
		size_t _size;  // Tamaño del array
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array&		operator=(const Array& other);
		T&			operator[](unsigned int index);
		const T&	operator[](unsigned int index) const;
		// unsigned int size();
		~Array();
};

#endif