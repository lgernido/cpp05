/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:13:34 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/05 11:12:26 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
	    std::cout << std::endl;

	    std::cout << GREEN "WORKING BUREAUCRAT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        try
        {
            Bureaucrat Lebron("Lebron", 23);
            Bureaucrat Kobe("Kobe", 8);
            Bureaucrat Magic("Magic", 32);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            std::cout << CYAN << BOLD << Kobe.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Kobe.getGrade() << RESET << std::endl;
            std::cout << CYAN << BOLD << Magic.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Magic.getGrade() << RESET << std::endl;
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }

	    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
        std::cout << GREEN "NON WORKING BUREAUCRAT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        try
        {
            Bureaucrat Lebron("Lebron", -1);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
        try
        {
            Bureaucrat Kobe("Kobe", 565);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
        try
        {
            Bureaucrat Magic("Magic", 0);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
        

        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"COPY TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
	    std::cout << std::endl;

	    std::cout << GREEN "WORKING BUREAUCRAT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;

        try
        {
            Bureaucrat Lebron("Lebron", 23);
            Bureaucrat Bronny(Lebron);
            Bureaucrat Bryce = Bronny;

            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            std::cout << CYAN << BOLD << Bronny.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Bronny.getGrade() << RESET << std::endl;
            std::cout << CYAN << BOLD << Bryce.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Bryce.getGrade() << RESET << std::endl;
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }

        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"GRADE CHANGES:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
	    std::cout << std::endl;

	    std::cout << GREEN "INCREASING THE GRADE WITH NO EXCEPTION:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        try
        {
            Bureaucrat Lebron("Lebron", 23);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            Lebron.upGrade(10);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
        
	    std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
        std::cout << GREEN "DECREASING THE GRADE WITH NO EXCEPTION:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        try
        {
            Bureaucrat Lebron("Lebron", 23);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            Lebron.downGrade(45);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
        
        std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
        std::cout << GREEN "INCREASING THE GRADE WITH AN EXCEPTION:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;

        try
        {
            Bureaucrat Lebron("Lebron", 23);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            Lebron.upGrade(25);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }

        std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
        std::cout << GREEN "DECREASING WITH AN EXCEPTION:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        
        try
        {
            Bureaucrat Lebron("Lebron", 23);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            Lebron.downGrade(200);
            std::cout << CYAN << BOLD << Lebron.getName() << RESET  << CYAN << " has a grade " << UNDERLINE << Lebron.getGrade() << RESET << std::endl;
            
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }

        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"OVERLOAD OF THE INSERTION OPERATOR:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
	    std::cout << std::endl;

        try
        {
            Bureaucrat Lebron("Lebron", 23);
            std::cout << CYAN << BOLD << Lebron << RESET << std::endl;
            
            Lebron.downGrade(40);
            std::cout << CYAN << BOLD << Lebron << RESET << std::endl;
            
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
        }
    }
    
}
