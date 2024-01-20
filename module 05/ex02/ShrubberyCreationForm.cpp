/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:21:26 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/21 00:09:09 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Form", 145 , 137)
{
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Form", 145 , 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("Form", 145, 137)
{
    this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        // this->name = other.name;
        this->target = other.target;
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)
{   
    if (getFormSignstate() && executor.getGrade() <= getFormGradeSign())
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
        // std::cout << "hello\n" << std::endl;
    }
    else
        std::cout << "hello" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}