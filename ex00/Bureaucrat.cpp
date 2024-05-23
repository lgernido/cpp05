/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:13:21 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/23 16:01:13 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*CONSTRUCTORS & DESTRUCTOS*/

//Default constructor

Bureaucrat::Bureaucrat()
{
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "default constructor is called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
Bureaucrat::~Bureaucrat()
{
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName()), grade(other.getGrade())
{
    if (grade < 1)
        throw (Bureaucrat::GradeTooLowException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooHighException());
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attributes constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{    
    if (grade < 1)
        throw (Bureaucrat::GradeTooLowException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooHighException());
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "attributes constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this == &other)
        return (*this);
    // this->name = other.getName();
    this->grade = other.getGrade();
    return (*this);
}

/*PUBLIC METHODS*/

//Getters

std::string const Bureaucrat::getName(void)const
{
    return (this->name);
}

int Bureaucrat::getGrade(void)const
{
    return (this->grade);
}

//Increment and decrement grade

void Bureaucrat::upGrade(int amount)
{
    this->grade += amount;
}

void Bureaucrat::downGrade(int amount)
{
    this->grade -= amount;
}