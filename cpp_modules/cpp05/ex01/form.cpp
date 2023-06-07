#include "form.hpp"

Form::Form(): _name("Default name"), _signed(false), _sign_grade(150), _execute_grade(150)  {
    std::cout << "Default <Form> constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "<Form> destructor called" << std::endl;
}

std::string Form::get_name() const {
    return (this->_name);
}
bool Form::get_signed() const {
    return (this->_signed);
}
int  Form::get_sign_grade() const {
    return (this->_sign_grade);
}

int Form::get_execute_grade() const {
    return (this->_execute_grade);
}