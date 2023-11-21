/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:50:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/21 18:29:05 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replase_str(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t start = 0;
    while ((start = line.find(s1, start)) != std::string::npos)
    {
        line.erase(start, s1.length());
        line.insert(start, s2);
        start = start + s2.length();
    }
}

int main(int ac, char **argv)
{
    if (ac != 4)
    {
        std::cout << "you must enter three parameters " << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(filename);
    std::string line;
    if (s1.empty() || s2.empty())
    {
        std::cout << " empty string " << std::endl;
        return (1);
    }
    if (!infile.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return (1);
    }
    infile.seekg(0, std::ios::end);
    if (infile.tellg() == 0)
    {
        std::cout << "Error: File is empty." << std::endl;
        infile.close();
        return (1);
    }
    infile.seekg(0, std::ios::beg); // Reset the file position to the beginning
    std::ofstream outfile(filename + ".replace");
    if (!outfile.is_open())
    {
        std::cerr << "Error opening file: " << filename << ".replace" << std::endl;
        infile.close();
        return (1);
    }
    while (getline(infile, line))
    {
        replase_str(line, s1, s2);
        // Write the modified line to the output file
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return (0);
}