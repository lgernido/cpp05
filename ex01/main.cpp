/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:26:55 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 12:36:25 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "INITIALIZING A VALID FORM:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    
	try
    {
		Form NBA_Team("Los Angeles Lakers", 24, 24);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
		try
	{
		Form NBA_Team("Boston Celtics", 150, 17);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
	try
	{
		Form NBA_Team("New York Knicks", 1, 1);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
	
	std::cout << GREEN "---------------------------------------------------" RESET << std::endl;
	std::cout << GREEN "INITIALIZING AN INVALID FORM:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	try
	{
		Form NBA_Team("Boston Celtics", 280, 17);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
	try
	{
		Form NBA_Team("Boston Celtics", 0, 17);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}
	try
	{
		Form NBA_Team("Boston Celtics", 17, 151);
		std::cout << YELLOW << BOLD << NBA_Team  << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"SIGNING A FORM:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	
	std::cout << std::endl << GREEN "---------------------------------------------------"<< std::endl;
	std::cout <<"SIGNING A FORM WITH NO ERRORS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;
	
	try
    {
		Bureaucrat Lebron("Lebron James", 1);
		std::cout << YELLOW << BOLD << Lebron << RESET << std::endl;
		Form NBA_Team("Los Angeles Lakers", 24, 24);
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;
		
		Lebron.signForm(NBA_Team);
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << GREEN "---------------------------------------------------"<< std::endl;
	std::cout <<"SIGNING A FORM WITH ERRORS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;
	
	try
    {
		Bureaucrat Lebron("Lebron James", 100);
		std::cout << YELLOW << BOLD << Lebron << RESET << std::endl;
		Form NBA_Team("Los Angeles Lakers", 24, 24);
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;
		
		Lebron.signForm(NBA_Team);
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
	
	std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"TESTING THE FORM COPY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	
	std::cout << std::endl << GREEN "---------------------------------------------------"<< std::endl;
	std::cout <<"SIMPLE FORM COPY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	try
    {
		Bureaucrat Lebron("Lebron James", 1);
		std::cout << YELLOW << BOLD << Lebron << RESET << std::endl;
		Form NBA_Team("Los Angeles Lakers", 24, 24);
		Form WNBA_Team(NBA_Team);
		/*Currently, none of them are signed*/
		std::cout << CYAN << BOLD << WNBA_Team  << RESET << std::endl;
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;
		
		Lebron.signForm(WNBA_Team);
		/*After this, only the copy will be signed*/
		std::cout << CYAN << BOLD << WNBA_Team  << RESET << std::endl;
		std::cout << CYAN << BOLD << NBA_Team  << RESET << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << RED << BOLD << e.what() << RESET << std::endl;
    }
        
}