/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:35:43 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 10:04:00 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap b("Scavy");

	std::cout << "\n===== ScavTrap tests =====\n" << std::endl;
	b.attack("Clappy");
	b.beRepaired(20);
	b.takeDamage(10);
	b.guardGate();
	std::cout << "\n==========================\n" << std::endl;
	
}