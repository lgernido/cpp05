/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:50:00 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/05 11:55:45 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "INITIALIZING  INTERN CLASS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    
	try
    {
        Intern victim;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "CREATING VALID FORMS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        AForm *shrubber;
        AForm *robotomy;
        AForm *pardon;
        
        Intern victim;
        shrubber = victim.makeForm("shrubbery creation", "Tree");
        robotomy = victim.makeForm("robotomy request", "Astro Boy");
        pardon = victim.makeForm("presidential pardon", "Obama");

        delete shrubber;
        delete robotomy;
        delete pardon;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "CREATING INVALID FORMS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        Intern victim;
        AForm *invalid;
        
        invalid = victim.makeForm("a non existing form", "Tree");

        delete invalid;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "TEST FROM THE SUBJECT:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        Bureaucrat someRandomBureaucrat("random man", 5);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        someRandomBureaucrat.signForm(*rrf);
        someRandomBureaucrat.executeForm(*rrf);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "EXECUTING FORMS CREATED BY INTERN:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        AForm *test;
        Bureaucrat Lebron("Lebron", 1);
        Intern victim;
        test = victim.makeForm("shrubbery creation", "Tree");
        Lebron.signForm(*test);
        Lebron.executeForm(*test);
        delete test;
    }
    catch(const std::exception& e)
    {

        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    try
    {
        AForm *test;
        Bureaucrat Lebron("Lebron", 1);
        Intern victim;
        test = victim.makeForm("robotomy request", "Astro Boy");
        Lebron.signForm(*test);
        Lebron.executeForm(*test);
        delete test;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    try
    {
        AForm *test;
        Bureaucrat Lebron("Lebron", 1);
        Intern victim;
        test = victim.makeForm("presidential pardon", "Obama");
        Lebron.signForm(*test);
        Lebron.executeForm(*test);
        delete test;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
  
}   