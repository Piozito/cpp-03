/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:07:25 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 10:34:25 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap& operator=(FragTrap const& a);	
		
		void highFivesGuys(void);
};

#endif