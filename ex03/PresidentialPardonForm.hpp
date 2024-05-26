/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:04:42 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 12:59:30 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public :
        ~PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);

        PresidentialPardonForm(const PresidentialPardonForm& other);
        
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        void executeConcrete(const std::string& target)const ;

    private :
        PresidentialPardonForm();

    protected :

};

#endif