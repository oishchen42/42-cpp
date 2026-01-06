/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:51:52 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/06 15:39:47 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string get_fdata(std::ifstream &fname, std::string &s1, std::string &s2)
{
    int nline = 0;
    std::string line;
    std::string mline;
    size_t pos = 0; // pos will be almost always zero as i'm going to shrink the line
    std::string res;

    while (std::getline(fname, line))
    {
        nline++;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            res += line.substr(0, pos);
            res += s2;
            line = line.substr(pos +  s1.length());
            pos = 0;
        }
        res += line + '\n';
    }
    if (!res.empty())
        res.erase(res.length() - 1);
    return (res);
}

bool write_to_file(std::string &to_replace, std::string &n_word, std::string &fname)
{
     if (to_replace.empty())
        return (std::cout << "no empty strings pls\n", false);
    if (fname.empty())
        return (std::cout << "empty line\n", false);
    std::ifstream finput(fname.c_str());
    if (!finput.is_open())
        return (std::cout << "couldn't open the input file\n", false);
    std::string res = get_fdata(finput, to_replace, n_word);
    std::ofstream foutput((fname + ".replace").c_str());
    if (!foutput.is_open())
        return (std::cout << "couldn't open the output file\n", false);
    foutput << res;
    foutput.close();
    finput.close();
    return (true);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "try run: <binary> <filename> <to_replace> <replacer>\n";
        return (1);
    }
    std::string fname = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (!write_to_file(s1, s2, fname))
        return (1);
    return (0);
}