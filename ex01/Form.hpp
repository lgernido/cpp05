/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:14:53 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/24 12:35:24 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public :
        Form();
        ~Form();
        Form(std::string name, int const sign_grade, int const execute_grade);

        Form(const Form& other);

        Form& operator=(const Form& other);

        std::string const getName()const;
        bool getSignature() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(Bureaucrat& Bureaucrat);
                
        class GradeTooHighException : public std::exception{
            public :
            const char *what()const throw (){
             return "Form required grade is too high.";
            };
        };
        class GradeTooLowException : public std::exception{
            public :
            const char *what() const throw(){
            return "Form required grade is too low.";   
            };
        };

    private :
        std::string const name;
        bool signature;
        int const sign_grade;
        int const execute_grade;
        

    protected :
};

std::ostream& operator<<(std::ostream &os, const Form& form);


#endif