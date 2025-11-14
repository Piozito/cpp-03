/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:35:43 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/14 15:17:21 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Clappy");
	ClapTrap b;

	std::cout << "\n====== Named tests ======" << std::endl;
	a.attack("Tomas");
	a.beRepaired(9999); //will only heal 1 because Clappy only used 1 energy
	a.attack("Tomas");
	a.attack("Tomas");
	a.attack("Tomas");
	a.takeDamage(10);
	a.attack("Tomas"); //isn't able to attack if it's dead

	std::cout << "\n====== Default tests ======" << std::endl;
	b.attack("Tomas");
	b.beRepaired(9999); //will only heal 1 because Clappy only used 1 energy
	b.attack("Tomas");
	b.takeDamage(5);
	b.beRepaired(5); // is able to heal
	b.takeDamage(10);
	b.attack("Tomas"); //isn't able to attack if it's dead
	b.beRepaired(10); // isn't able to heal if it's dead
	std::cout << std::endl;
}