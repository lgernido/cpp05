/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:01:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 13:15:07 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    public :
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);

        ShrubberyCreationForm(const ShrubberyCreationForm& other);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        void executeConcrete(const std::string& target)const ;


    private :
        ShrubberyCreationForm();

    protected :
};


#endif