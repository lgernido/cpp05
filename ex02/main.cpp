/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:35:25 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 13:50:52 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "INITIALIZING  DIFFERENT VALID FORMS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    
	try
    {
        ShrubberyCreationForm Big_tree("Tree");
		std::cout << YELLOW << BOLD << Big_tree  << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
	try
	{
		RobotomyRequestForm Astro_boy("Astro Boy");
		std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
    std::cout << std::endl;
    try
    {
		PresidentialPardonForm Obama("Obama");
		std::cout << YELLOW << BOLD << Obama << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"FORM EXECUTION:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING VALID FORM EXECUTION:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Bureaucrat Lebron("Lebron", 1);
    
    try
    {
		ShrubberyCreationForm Big_tree("Tree");
		std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Lebron.signForm(Big_tree);
        std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Lebron.executeForm(Big_tree);        
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    try
	{
		RobotomyRequestForm Astro_boy("Astro Boy");
		std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Lebron.signForm(Astro_boy);
        std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Lebron.executeForm(Astro_boy);
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
    std::cout << std::endl;
    try
    {
		PresidentialPardonForm Obama("Obama");
		std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Lebron.signForm(Obama);
        std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Lebron.executeForm(Obama);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    
	std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "TESTING BUREAUCRAT UNABLE TO SIGN OR EXECUTE FORMS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Bureaucrat Kobe("Kobe", 150);
    try
    {
		ShrubberyCreationForm Big_tree("Tree");
		std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Kobe.signForm(Big_tree);
        std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Kobe.executeForm(Big_tree);        
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    try
	{
		RobotomyRequestForm Astro_boy("Astro Boy");
		std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Kobe.signForm(Astro_boy);
        std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Kobe.executeForm(Astro_boy);
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
    std::cout << std::endl;
    try
    {
		PresidentialPardonForm Obama("Obama");
		std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Kobe.signForm(Obama);
        std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Kobe.executeForm(Obama);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "BUREAUCRAT THAT CAN SIGN EVERYTHING:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Bureaucrat Magic("Magic", 22);
    try
    {
		ShrubberyCreationForm Big_tree("Tree");
		std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Magic.signForm(Big_tree);
        std::cout << YELLOW << BOLD << Big_tree << RESET << std::endl;
        Magic.executeForm(Big_tree);        
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    try
	{
		RobotomyRequestForm Astro_boy("Astro Boy");
		std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Magic.signForm(Astro_boy);
        std::cout << YELLOW << BOLD << Astro_boy << RESET << std::endl;
        Magic.executeForm(Astro_boy);
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
    std::cout << std::endl;
    try
    {
		PresidentialPardonForm Obama("Obama");
		std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Magic.signForm(Obama);
        std::cout << YELLOW << BOLD << Obama << RESET << std::endl;
        Magic.executeForm(Obama);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
}