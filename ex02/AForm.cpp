/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:14:37 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 10:39:17 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
AForm::AForm() : name("a basic Aform"), signature(false), sign_grade(150), execute_grade(150)
{
    std::cout << BOLD << "AForm " << RESET << ITALIC << "default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
AForm::~AForm()
{
    std::cout << BOLD << "AForm " << RESET << ITALIC << "destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constructor
AForm::AForm(const AForm& other) : name(other.getName() + "_copy"), signature(other.getSignature()), sign_grade(other.getSignGrade()), execute_grade(other.getExecuteGrade())
{
    std::cout << BOLD << "AForm " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attributes constructor
AForm::AForm(std::string name, int const sign_grade, int const execute_grade) : name(name), signature(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
    if (sign_grade < GRADE_MAX || execute_grade < GRADE_MAX)
        throw (AForm::GradeTooHighException());
    else if (sign_grade > GRADE_MIN || execute_grade > GRADE_MIN)
        throw (AForm::GradeTooLowException());
    std::cout << BOLD << "AForm " << RESET << ITALIC << "attributes constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
AForm& AForm::operator=(const AForm& other)
{
    if (this == &other)
        return (*this);
    this->signature = other.getSignature();
    return (*this);
}

/*INSERTION OPERATOR*/
std::ostream& operator<<(std::ostream &os, const AForm& Aform) 
{
    std::string signed_status;
    if(Aform.getSignature() == false)
    {
        signed_status = "not signed";
    }
    else
    {
        signed_status = "signed";
    }
	os << Aform.getName() << ", has a required grade to sign of "
		<< Aform.getSignGrade() << " and a required grade to execute of " 
        << Aform.getExecuteGrade() << ". Currently, the Aform is " << signed_status << std::endl;
	return os;
}

/*PUBLIC METHODS*/


//Checking that the Aform can be signed
void AForm::beSigned(Bureaucrat& Bureaucrat)
{
    int bureaucrat_grade = Bureaucrat.getGrade();
    if (bureaucrat_grade <= this->sign_grade && bureaucrat_grade >= GRADE_MAX)
    {
        this->signature = true;
    }
    else
    {
        throw (AForm::GradeTooLowException());
    }
}

//Getters

std::string const AForm::getName() const
{
    return (this->name);
}

bool AForm::getSignature() const
{
    return (this->signature);
}

int AForm::getSignGrade() const
{
    return (this->sign_grade);
}

int AForm::getExecuteGrade() const
{
    return (this->execute_grade);
}

std::string AForm::getTarget() const
{
    return (this->target);
}