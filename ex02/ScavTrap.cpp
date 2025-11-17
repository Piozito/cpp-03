/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:20:01 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 10:31:11 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& a)
{
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
	if(this != &a)
	{
		this->_attack = a._attack;
		this->_energy = a._energy;
		this->_hit = a._hit;
		this->_name = a._name;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_hit << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is unable to attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}