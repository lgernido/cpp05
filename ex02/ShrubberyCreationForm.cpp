/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:01:44 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:45:24 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), signature(false), sign_grade(145), execute_grade(137)
{
    std::cout << BOLD << "Shrubbery Creation Form " << RESET << ITALIC << "default constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << BOLD << "Shrubbery Creation Form " << RESET << ITALIC << "destructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Copy Consctructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : name(other.getName() + "_copy"), signature(other.getSignature()), sign_grade(145), execute_grade(137)
{
    std::cout << BOLD << "Shrubbery Creation Form " << RESET << ITALIC << "copy constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

//Attribute constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string& target) : AForm("Shrubber Form", 145, 137)
{
    this->target = target;
    std::cout << BOLD << "Shrubbery Creation Form " << RESET << ITALIC << " attribute constructor called" << RESET << std::endl;
    std::cout << std::endl;
}

/*ASSIGNMENT OPERATOR*/
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this == &other)
        return (*this);
    this->signature = other.getSignature();
    return(*this)
}

/*PUBLIC METHODS*/

//Execute the shrubbery 
void ShrubberyCreationForm::executeForm(std::string target)
{
    std::fstream shrub_file;

    shrub_file.open(target + "_shrubbery", std::fstream.out || std::fstream.trunc);

    if (!shrub_file.good())
        std::cerr << RED << BOLD << "Error trying to open shrubbery file" << RESET << std::endl;

    shrub_file <<
    "                                                     .\n"
    "                                          .         ;  \n"
    "            .              .              ;%     ;;   \n"
    "              ,           ,                :;%  %;   \n"
    "                :         ;                   :;%;'     .,\n"   
    "       ,.        %;     %;            ;        %;'    ,;\n"
    "         ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
    "          %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
    "           ;%;      %;        ;%;        % ;%;  ,%;'\n"
    "            `%;.     ;%;     %;'         `;%%;.%;'\n"
    "             `:;%.    ;%%. %@;        %; ;@%;%'\n"
    "                `:%;.  :;bd%;          %;@%;'\n"
    "                  `@%:.  :;%.         ;@@%;' \n"  
    "                    `@%.  `;@%.      ;@@%;   \n"      
    "                      `@%%. `@%%    ;@@%;   \n"     
    "                        ;@%. :@%%  %@@%;   \n"    
    "                          %@bd%%%bd%%:;    \n" 
    "                            #@%%%%%:;;\n"
    "                           %@@%%%::;\n"
    "                            %@@@%(o);  . '\n"         
    "                            %@@@o%;:(.,'     \n"    
    "                        `.. %@@@o%::;         \n"
    "                           `)@@@o%::;         \n"
    "                            %@@(o)::;        \n"
    "                           .%@@@@%::;         \n"
    "                           ;%@@@@%::;.          \n"
    "                          ;%@@@@%%:;;;. \n"
    "                      ...;%@@@@@%%:;;;;,.. \n";
    
    shrub_file.close();
}