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
    std::string name;
    name = "yesmine";
    Zombie z(name);
    z.newZombie(name);
    z.announce();
    return 0;
}