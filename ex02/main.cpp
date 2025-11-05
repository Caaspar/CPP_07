/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:44:49 by caspar            #+#    #+#             */
/*   Updated: 2025/09/01 11:20:05 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
    try{
        Array<int> arr(3);

        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;

        for (unsigned int i = 0; i < arr.size(); ++i)
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        std::cout << arr[5] << std::endl; // Must launch an exception

    } catch (const std::exception& e){
        std::cerr << "Exception caught : " << e.what() << std::endl;
    }

    try {
        Array<int> c(3);
        for (unsigned int i = 0; i < c.size(); ++i)
            c[i] = 42;

        Array<int> d(c);
        d[0] = 99;

        std::cout << "c[0] = " << c[0] << " (must be 42)" << std::endl;
        std::cout << "d[0] = " << d[0] << " (must be 99)" << std::endl;
        std::cout << "d[1] = " << d[1] << " (must be 42)" << std::endl;

        Array<int> e;
        e = c;
        e[1] = 777;

        std::cout << "c[1] = " << c[1] << " (must be 42)" << std::endl;
        std::cout << "e[1] = " << e[1] << " (must be 777)" << std::endl;
        std::cout << "e[2] = " << e[2] << " (must be 42)" << std::endl;
        std::cout << "e[6] = " << e[6] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught : " << e.what() << std::endl;
    }

    // same but with string
    try{
        Array<std::string> arr(3);

        arr[0] = "Salut";
        arr[1] = "les";
        arr[2] = "amis";

        for (unsigned int i = 0; i < arr.size(); ++i)
            std::cout << "arr[" << i << "] = \"" << arr[i] << "\"" << std::endl;

        std::cout << arr[10] << std::endl; // Must launch an exception

    } catch (const std::exception& e){
        std::cerr << "Exception caught : " << e.what() << std::endl;
    }
    return (0);
}

