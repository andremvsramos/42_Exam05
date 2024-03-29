/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:37:48 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/11 21:37:48 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const Polymorph& original) : ASpell(original) {}

Polymorph&	Polymorph::operator=(const Polymorph& original) {
	if (this != &original) ASpell::operator=(original);
	return *this;
}

Polymorph::~Polymorph() {}

Polymorph* Polymorph::clone() const {
	return new Polymorph(*this);
}
