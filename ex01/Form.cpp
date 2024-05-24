/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:14:37 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/24 12:52:46 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
Form::Form() : name("a basic form"), signature(false), sign_grade(150), execute_grade(150)
{
    std::cout << BOLD << "Form " << RESET << ITALIC << "default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
Form::~Form()
{
    std::cout << BOLD << "Form " << RESET << ITALIC << "destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy constructor
Form::Form(const Form& other) : name(other.getName() + "_copy"), signature(other.getSignature()), sign_grade(other.getSignGrade()), execute_grade(other.getExecuteGrade())
{
    std::cout << BOLD << "Form " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attributes constructor
Form::Form(std::string name, int const sign_grade, int const execute_grade) : name(name), signature(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
    if (sign_grade < GRADE_MAX || execute_grade < GRADE_MAX)
        throw (Form::GradeTooHighException());
    else if (sign_grade > GRADE_MIN || execute_grade > GRADE_MIN)
        throw (Form::GradeTooLowException());
    std::cout << BOLD << "Form " << RESET << ITALIC << "attributes constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
Form& Form::operator=(const Form& other)
{
    if (this == &other)
        return (*this);
    
    return (*this);
}

/*INSERTION OPERATOR*/
std::ostream& operator<<(std::ostream &os, const Form& form) 
{
    std::string signed_status;
    if(form.getSignature() == false)
    {
        signed_status = "not signed";
    }
    else
    {
        signed_status = "signed";
    }
	os << form.getName() << ", has a required grade to sign of "
		<< form.getSignGrade() << " and a required grade to execute of " 
        << form.getExecuteGrade() << ". Currently, the form is " << signed_status << std::endl;
	return os;
}

/*PUBLIC METHODS*/


//Checking that the form can be signed
void Form::beSigned(Bureaucrat& Bureaucrat)
{
    int bureaucrat_grade = Bureaucrat.getGrade();
    if (bureaucrat_grade <= this->sign_grade && bureaucrat_grade >= GRADE_MAX)
    {
        this->signature = true;
    }
    else
    {
        throw (Form::GradeTooLowException());
    }
}

//Getters

std::string const Form::getName() const
{
    return (this->name);
}

bool Form::getSignature() const
{
    return (this->signature);
}

int Form::getSignGrade() const
{
    return (this->sign_grade);
}

int Form::getExecuteGrade() const
{
    return (this->execute_grade);
}