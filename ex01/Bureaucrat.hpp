/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:13:19 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/24 10:53:23 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"
#define RESET      "\033[0m"

#define GRADE_MAX 1
#define GRADE_MIN 150

class Form;

class Bureaucrat
{
    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);

        Bureaucrat(const Bureaucrat& other);

        Bureaucrat& operator=(const Bureaucrat& other);

        std::string const getName(void)const;
        int getGrade(void)const;

        void upGrade(int amount);
        void downGrade(int amount);
        void signForm(Form& form);
        
        class GradeTooHighException : public std::exception{
            public :
            const char *what()const throw (){
             return "Grade too high. Bureaucrat best possible grade is 1.";
            };
        };
        class GradeTooLowException : public std::exception{
            public :
            const char *what() const throw(){
            return "Grade too low. Bureaucrat worst possible grade is 150.";   
            };
        };
        
    private :
        std::string const name;
        int grade;
        
    protected :
};

    std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat);

#endif