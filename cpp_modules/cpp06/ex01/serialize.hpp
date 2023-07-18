#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

struct Data {
    int value;
    char character;
};

class serialize
{
	public:
		serialize();
		~serialize();
		void* serial(Data* ptr);
		Data* deserial(void* ptr);
};

#endif
