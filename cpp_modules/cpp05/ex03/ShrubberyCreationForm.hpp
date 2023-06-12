#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Aform.hpp"

class ShrubberyCreationForm: public Form {
    private:
        std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();
        std::string getTarget() const;
        void		execute(Bureaucrat const &executor) const;

};

#endif