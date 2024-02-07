/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:21:26 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 16:08:13 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Form", 145 , 137)
{
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145 , 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        this->target = other.target;
        AForm::operator=(other);
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (getFormSignstate() && executor.getGrade() <= getFormGradeExe())
    {
        std::string tree;
        tree = "        &&& &&  & && \n\
                    && &\\/&\\|& ()|/ @, && \n\
                    &\\/(/&/&||/& /_/)_&/_& \n\
                &() &\\/&|()|/&\\/ '%\" & () \n\
                &_\\_&&_\\ |& |&&/&__%_/_& && \n\
                &&   && & &| &| /& & % ()& /&& \n\
                ()&_---()&\\&\\|&&-&&--%---()~ \n\
                    &&    \\||| \n\
                            ||| \n\
                            ||| \n\
                            ||| \n\
                    , -=-~  .-^- _ \n\
                ejm97         ` \n";

        std::ofstream outfile(target + "_shrubbery");
        if (outfile.is_open())
            outfile << tree;
        else
            std::cout<< "Failed to create file for shrubbery" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}