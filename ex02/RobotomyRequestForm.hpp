/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:03:29 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 11:45:06 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public :
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string &target);

        RobotomyRequestForm(const RobotomyRequestForm& other);
        
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        void executeForm(std::string &target);

    private :
        RobotomyRequestForm();

    protected :
}

#endif