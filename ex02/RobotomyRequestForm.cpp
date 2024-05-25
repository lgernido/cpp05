/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:03:27 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 13:52:14 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*CONSTUCTORS & DESTRUCTORS*/

//Default Constuctor
RobotomyRequestForm::RobotomyRequestForm() : AForm()
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
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) 
{
    this->name = other.getName() + "_copy";
    this->signature = other.getSignature();
    this->sign_grade = other.getSignGrade();
    this->execute_grade = other.getExecuteGrade();
    this->target = other.getTarget();
    std::cout << BOLD << "Robotomy Request Form" << RESET << ITALIC << " copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attribute constructor 
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request", 72, 45)
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
void RobotomyRequestForm::executeConcrete(const std::string& target)const 
{
	std::cout << ORANGE << BOLD << "* LOUD DRILLING NOISES *\n" << RESET << std::endl;
	srand(time(NULL));
	if (rand() % 2)
    {
		std::cout << GREEN << BOLD << target << " has been successfully robotimized!" << std::endl;
        std::cout << std::endl;
    }
	else
    {
		std::cout << RED << BOLD << target << " robotomy failed!" << std::endl;
        std::cout << std::endl;
    }
}