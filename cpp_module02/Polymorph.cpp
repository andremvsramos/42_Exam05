/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:08:14 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:08:14 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const Polymorph& og) : ASpell(og) {}

Polymorph& Polymorph::operator=(const Polymorph& og) {
	if (this != &og) ASpell::operator=(og);
	return (*this);
}

Polymorph::~Polymorph() {}


Polymorph*	Polymorph::clone() const {
	return (new Polymorph(*this));
}
