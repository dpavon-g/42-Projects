#include "Bureaucrat.hpp"


// Constructors

Bureaucrat::Bureaucrat(): _name("Default Bureaucrat"), _grade(150) {
	std::cout << "Default <Boureaucrat> constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int value): _name(name), _grade(value) {
	if (value < 0)
		throw Bureaucrat::GradeTooLowException();
	else if (value > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Name <Bureaucrat> constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): _name(copy.get_name()), _grade(copy.get_grade()) {
	std::cout << "Name <Bureaucrat> copy constructor called" << std::endl;
}

// Getters

std::string Bureaucrat::get_name() const {
	return this->_name;
}

int Bureaucrat::get_grade() const {
	return this->_grade;
}

// Extra functions

void    Bureaucrat::increment_grade(int value) {
	this->_grade = this->_grade - value;
	if (this->get_grade() < 0)
		throw Bureaucrat::GradeTooLowException();
	else if (this->get_grade() > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement_grade(int value) {
	this->_grade = this->_grade + value;
	if (this->get_grade() < 0)
		throw Bureaucrat::GradeTooLowException();
	else if (this->get_grade() > 150)
		throw Bureaucrat::GradeTooHighException();
}

// Operators overload

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureau) {
	os << "<" << bureau._name << ">, bureaucrat grade <" << bureau._grade << ">"; 
	return os;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		this->_grade = other.get_grade();
	}
	return (*this);
}

// Destructor

Bureaucrat::~Bureaucrat() {
	std::cout << "<Bureaucrat> destructor called" << std::endl;
}

