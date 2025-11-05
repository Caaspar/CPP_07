/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:44:49 by caspar            #+#    #+#             */
/*   Updated: 2025/09/01 11:22:18 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>
#include <cctype>

void printInt(const size_t& x) {
    std::cout << x << " ";
}

void printString(std::string& str) {
    std::cout << str << " ";
}

void toUpper(std::string& str) {
    for (size_t i = 0; i < str.size(); i++) {
        str[i] = std::toupper(static_cast<unsigned char>(str[i]));   
    }
}

int main()
{
    size_t numbers[] = {1, 2, 3, 4, 5};
    std::string words[] = {"Hello", "World"};

    try {
        std::cout << "Tableau d'int : ";
        ::iter(numbers, 5, printInt);
        std::cout << std::endl;

        std::cout << "Tableau de string : ";
        ::iter(words, 2, printString);
        std::cout << std::endl;

        ::iter(words, 2, toUpper);

        std::cout << "Tableau de string après majuscule : ";
        ::iter(words, 2, printString);
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught : " << e.what() << std::endl;
    }

    return (0);
}
