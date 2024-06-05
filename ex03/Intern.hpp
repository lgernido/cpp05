/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:44:02 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/05 09:07:22 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef AForm* (Intern::*Concrete)(const std::string&) const;

class Intern
{
    public :
        Intern();
        ~Intern();
        
        Intern(const Intern& other);

        Intern& operator=(const Intern& other);

        AForm *makeForm(std::string name, std::string target);

        class NonExistingFormException : public std::exception{
            public :
            const char *what()const throw (){
             return "The form you asked the intern to create does not exist.";
            };
        };

    private :
        static const std::string	names[3];
		static const Concrete		forms[3];

		AForm*	ShrubberyCreation(const std::string& target) const;
		AForm*	RobotomyRequest(const std::string& target) const;
		AForm*	PresidentialPardon(const std::string& target) const;

    protected :   
};




#endif