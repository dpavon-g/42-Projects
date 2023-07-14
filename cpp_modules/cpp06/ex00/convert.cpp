#include "convert.hpp"
#include <cctype>

bool is_char(const std::string &arg) {
    if (arg.length() == 1 && !std::isdigit(arg[0]))
        return true;
    return false;
}

bool is_valid(const std::string &arg, const std::string &chars) {
    size_t found = arg.find_first_not_of(chars);
    return (found == std::string::npos);
}

void    print_values(const std::string &mychar, const std::string &myint, const std::string &myfloat, const std::string &mydouble) {
    std::cout << "char: " + mychar << std::endl;
    std::cout << "int: " + myint << std::endl;
    std::cout << "float: " + myfloat << std::endl;
    std::cout << "double: " + mydouble << std::endl;
}

int	argument_type(const std::string &arg) {
    // Carácteres imprimibles: del 30 al 126.
    if (!is_char(arg)) {
        if (is_valid(arg, "0123456789.f")) {
            std::cout << "Valor válido" << std::endl;
        }
        else {
            print_values("imposible", "imposible", "nanf", "nan");
        }
    }
    else {
        std::cout << "Is a char" << std::endl;
    }
    return 1;
}