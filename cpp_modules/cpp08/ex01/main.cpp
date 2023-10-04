#include "Span.hpp"

int main(void) {
    Span array(5);
    
    std::cout << "--- Add number test ---" << std::endl;
    int i = 0;
    while (i < 10) {
        try {
            array.addNumber(i);
            std::cout << "Number: <" << i << "> correctly added" << std::endl;
        }
        catch (const std::runtime_error& e) {
            std::cout << e.what() << std::endl;
            break;
        }
        i++;
    }
}