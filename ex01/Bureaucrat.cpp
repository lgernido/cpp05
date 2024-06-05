/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:13:21 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/05 11:34:23 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*CONSTRUCTORS & DESTRUCTOS*/

//Default constructor

Bureaucrat::Bureaucrat() : name("unknown"), grade(150)
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
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName() + "_copy"), grade(other.getGrade())
{
    if (grade < GRADE_MAX)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > GRADE_MIN)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attributes constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{    
    if (grade < GRADE_MAX)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > GRADE_MIN)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << BOLD << "Bureaucrat " << RESET << ITALIC << "attributes constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this == &other)
        return (*this);
    this->grade = other.getGrade();
    return (*this);
}

/*INSERTION OPERATOR*/
std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat) 
{
	os << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << std::endl;
	return os;
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

void Bureaucrat::downGrade(int amount)
{
    if (grade + amount > GRADE_MIN)
        throw (Bureaucrat::GradeTooLowException());
    else
        this->grade += amount;
}

void Bureaucrat::upGrade(int amount)
{
    if (grade - amount < GRADE_MAX)
        throw (Bureaucrat::GradeTooHighException());
    else
        this->grade -= amount;
}

//Sign the form 
void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        
        std::cout << GREEN << BOLD << this->name << " signed " << form.getName() << " form." << RESET << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << this->name << " couldn't sign " << form.getName() << " because " << e.what() << RESET << std::endl;
        std::cout << std::endl;;
    }
}