#include "convert.hpp"
#include <cctype>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cstdlib>

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

std::string intToChar(int number) {
    if (number >= 0 && number <= 127) {
        char ch = static_cast<char>(number);
    if ((ch >= 0 && ch <= 31) || ch == 127) {
      return "Non displayable";
    } else {
      return std::string(1, ch);
    }
  } else {
    return "Non displayable";
  }
}

std::string intToString(int number) {
    std::stringstream ss;
    ss << number;
    return ss.str();
}

std::string intToFloat(int number, int decimalDigits) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(decimalDigits) << static_cast<float>(number) << "f";
    return ss.str();
}

std::string intToDouble(int number, int decimalDigits) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(decimalDigits) << static_cast<double>(number);
    return ss.str();
}


bool isInRange(const std::string& numberString) {
  char* endPtr;
  long int number = strtol(numberString.c_str(), &endPtr, 10);
  if (*endPtr != '\0') {
    return false;
  }
  return (number >= std::numeric_limits<int>::min() && 
          number <= std::numeric_limits<int>::max());
}

int atoi(const std::string& str) {
  std::istringstream iss(str);
  int number;
  iss >> number;
  return number;
}

int floatToInt(float number) {
  return static_cast<int>(number);
}

int	argument_type(const std::string &arg) {
    if (!is_char(arg)) {
        if (is_valid(arg, "-0123456789.f")) {
            if (is_valid(".f", arg)) {
                std::cout << "Es float" << std::endl;
            }
            else if (is_valid(".", arg)) {
                std::cout << "Es double" << std::endl;
            }
            else {
                if (isInRange(arg)) {
                    print_values(intToChar(atoi(arg)), arg, intToFloat(atoi(arg), 1), intToDouble(atoi(arg), 1));
                }
                else {
                    std::cout << arg << std::endl;
                    std::cout << "El numero no esta en rango" << std::endl;
                }
            }
        }
        else {
            if (arg == "inf" || arg == "-inf" || arg == "nan")
                print_values("impossible", "imposible", arg + "f", arg);
            else if (arg == "inff" || arg == "-inf" || arg == "nanf")
                print_values("impossible", "impossible", arg, arg.substr(0, arg.size() - 1));
            else
                print_values("impossible", "impossible", "nanf", "nan");
        }
    }
    else {
        if ((arg[0] >= 0 && arg[0] <= 31) || arg[0] == 127) 
            print_values("impossible", "impossible", "nanf", "nan");
        else {
            int toInt = arg[0];
            std::string toFloat = intToFloat(toInt, 1);
            std::string toDouble = intToDouble(toInt, 1);
            print_values(arg, intToString(toInt), toFloat, toDouble);
        }
    }
    return 1;
}