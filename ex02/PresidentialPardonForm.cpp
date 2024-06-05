/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:04:41 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/05 11:44:58 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5)
{
    std::cout << BOLD << "Presidential Pardon Form" << RESET << ITALIC << " default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << BOLD << "Presidential Pardon Form" << RESET << ITALIC << " destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
  this->name = other.getName() + "_copy";
  this->signature = other.getSignature();
  this->sign_grade = other.getSignGrade();
  this->execute_grade = other.getExecuteGrade();
  this->target = other.getTarget();  
  std::cout << BOLD << "Presidential Pardon Form" << RESET << ITALIC << " copy constructor called" << RESET << std::endl;
  std::cout << std::endl;
}

//Attribute constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25, 5)
{
    this->target = target;
    std::cout << BOLD << "Presidential Pardon Form" << RESET << ITALIC << " attribute constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this == &other)
        return (*this);
    this->signature = other.getSignature();
    return (*this);
}

/*PUBLIC METHOD*/
void PresidentialPardonForm::executeConcrete(const std::string& target)const
{
	std::cout << GREEN << BOLD << target << " was pardoned by Zaphod Beeblebrox!" << RESET << std::endl;
    std::cout << std::endl;
}