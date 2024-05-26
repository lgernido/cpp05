/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:44:05 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/26 10:14:08 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
Intern::Intern()
{
    std::cout << BOLD << "Intern " << RESET << ITALIC << "default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
Intern::~Intern()
{
    std::cout << BOLD << "Intern " << RESET << ITALIC << "destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constrcutor
Intern::Intern(const Intern& other)
{
    std::cout << BOLD << "Inter " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
Intern& Intern::operator=(const Intern& other)
{
    if (this == &other)
        return (*this);
    
    return (*this);
}


/*PUBLIC METHODS*/
Aform* Intern::makeForm(std::string name, std::string target)
{
    const std::string	Intern::names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    const CF Intern::forms[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
    for (int i = 0; i < 3; i++)
		if (names[i] == name)
			return (this->*(forms[i]))(target);
	throw NonExistingFormException();
}

/*PRIVATE METHODS*/
AForm*	Intern::ShrubberyCreation(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::RobotomyRequest(const std::string& target) const 
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::PresidentialPardon(const std::string& target) const 
{
	return new PresidentialPardonForm(target);
}