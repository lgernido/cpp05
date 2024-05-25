/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:04:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:44:27 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string &target);

        PresidentialPardonForm(const PresidentialPardonForm& other);
        
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        void executeForm(std::string target);

    private :
        PresidentialPardonForm();

    protected :

}

#endif