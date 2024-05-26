/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:03:29 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/25 13:23:39 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
    public :
        ~RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);

        RobotomyRequestForm(const RobotomyRequestForm& other);
        
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        void executeConcrete(const std::string& target) const;

    private :
        RobotomyRequestForm();

    protected :
};

#endif