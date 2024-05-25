/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:14:53 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:44:50 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public :
        AForm();
        virtual ~AForm();
        AForm(std::string name, int const sign_grade, int const execute_grade);

        AForm(const AForm& other);

        AForm& operator=(const AForm& other);

        std::string const getName()const;
        bool getSignature() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        std::string getTarget() const;
        

        void beSigned(Bureaucrat& Bureaucrat);
        virtual void executeForm(std::string target) = 0;
                
        class GradeTooHighException : public std::exception{
            public :
            const char *what()const throw (){
             return "grade is too high.";
            };
        };
        class GradeTooLowException : public std::exception{
            public :
            const char *what() const throw(){
            return "grade is too low.";   
            };
        };

    private :
        

    protected :
        std::string const name;
        std::string const target;
        bool signature;
        int const sign_grade;
        int const execute_grade;
};

std::ostream& operator<<(std::ostream &os, const AForm& Aform);


#endif