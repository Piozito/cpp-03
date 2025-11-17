/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:07:16 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 10:32:06 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& a)
{
	std::cout << "Copy FragTrap assignment operator called" << std::endl;
	if(this != &a)
	{
		this->_attack = a._attack;
		this->_energy = a._energy;
		this->_hit = a._hit;
		this->_name = a._name;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " gives a high-five!" << std::endl;	
}