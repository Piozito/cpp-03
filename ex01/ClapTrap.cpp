/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:36:11 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/14 15:35:01 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_name = "default";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Named ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& a)
{
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	if(this != &a)
	{
		this->_attack = a._attack;
		this->_energy = a._energy;
		this->_hit = a._hit;
		this->_name = a._name;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hit << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is unable to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " gets hit for " << amount << " hit points!!" << std::endl;
		this->_hit -= amount;
		if (this->_hit < 0)
			this->_hit = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " was attacked but was already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hit > 0)
	{
		if(this->_hit >= 10)
		{
			std::cout << "ClapTrap " << this->_name << " tried to repair itself, but was already at max energy" << std::endl;
		}
		else
		{
			if(this->_hit + amount > 10)
			{
				std::cout << "ClapTrap " << this->_name << " repaired itself for " << (10 - this->_hit) << std::endl;
				this->_hit = 10;
				this->_energy--;
			}
			else
			{
				std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << std::endl;
				this->_hit += amount;
			}
		}
	}
	else
		std::cout << "ClapTrap " << this->_name << " tried to repair itself, but it was too late..." << std::endl;
}