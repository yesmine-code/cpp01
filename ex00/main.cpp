/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:19:22 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/16 12:19:25 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	//heap part : dynamic allocation + deleting instance (delete call destructor)
	Zombie *z;
	z = newZombie("yesmine heap!!");
	z->announce();
	delete(z); //heap destructor
	//stack part : static instance + destructor called automatically
	randomChump("yesmine stack!!");
    return 0;
}