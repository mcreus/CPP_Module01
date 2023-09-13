/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:15:46 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/13 17:33:25 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of a string variable is : " << &string << std::endl;
	std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable is : " << string << std::endl;
	std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;
}