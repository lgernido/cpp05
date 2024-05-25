/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:03:27 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:45:16 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*CONSTUCTORS & DESTRUCTORS*/

//Default Constuctor
RobotomyRequestForm::RobotomyRequestForm() : AForm(), signature(false), sign_grade(72), execute_grade(45)
{
    std::cout << BOLD << "Robotomy Request Form" << RESET << ITALIC << " default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << BOLD << "Robotomy Request Form" << RESET << ITALIC << " destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : name(other.getName() + "_copy"), signature(other.getSignature()), sign_grade(72), execute_grade(45) 
{
    std::cout << BOLD << "Robotomy Request Form" << RESET << ITALIC << " copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attribute constructor 
RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm("Robotomy Request Form", 72, 45)
{
    this->target = target;
    std::cout << BOLD << "Robotomy Request Form" << RESET << ITALIC << " attribute constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this == &other)
        return (*this);
    this->signature = other.getSignature();
    return (*this);
}

/*PUBLIC MEHTOD*/

//Execute the robotomy
void RobotomyRequestForm::executeForm(std::string& target)
{
	std::cout << "* LOUD DRILLING NOISES *" << std::endl << target;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << " has been successfully robotimized!" << std::endl;
	else
		std::cout << " robotomy failed!" << std::endl;
}