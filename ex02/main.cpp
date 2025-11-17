/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:35:43 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 10:13:24 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap b("Fraggy");

	std::cout << "\n===== FragTrap tests =====\n" << std::endl;
	b.attack("Clappy");
	b.beRepaired(20);
	b.takeDamage(10);
	b.highFivesGuys();
	std::cout << "\n==========================\n" << std::endl;
	
}