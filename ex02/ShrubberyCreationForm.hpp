/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:01:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:45:01 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public :
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string& target);

        ShrubberyCreationForm(const ShrubberyCreationForm& other);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        void executeForm(std::string target);


    private :
        ShrubberyCreationForm();

    protected :
}


#endif