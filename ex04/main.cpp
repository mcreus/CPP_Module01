/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:41:29 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/15 19:03:42 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char *av[])
{
	std::string	testFile;
	std::string	line;
	std::string	content;
	std::string	newContent;
	std::string	s1;
	std::string	s2;
	std::string	newTestFile("./newTestFile.txt");
	size_t			startPos;
	size_t			s1Pos;

	testFile = av[1];
	s1 = av[2];
	s2 = av[3];
	
	
	if (ac != 4)
		std::cerr << "Apres le nom du programme, il faut mettre le nom du fichier a copier, la chaine de caracteres a remplacer puis la chaine de caracteres qui la remplace" << std::endl;

	std::ifstream monFlux(testFile);
	if (!monFlux)
		std::cerr << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
	while (std::getline(monFlux, line))
			content += line + '\n';
		
	startPos = 0;
	s1Pos = content.find(s1);
	while (s1Pos != std::string::npos)
	{
		newContent += content.substr(startPos, (s1Pos - startPos));
		newContent += s2;
		startPos = s1Pos + s1.length();
		s1Pos = content.find(s1, startPos);
	}
	newContent += content.substr(s1Pos);
	std::ofstream monFlux2("./newTestFile.txt");
	if (monFlux2)
		monFlux2 << newContent;
	else
		std::cerr << "Impossible de creer le nouveau fichier!!!" << std::endl;

	std::cout << "Le fichier a bien ete modifie et place dans le fichier : newTestFile.txt" << std::endl;

}