/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:21:53 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/10 19:21:53 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const Polymorph& original) : ASpell(original) {}

Polymorph& Polymorph::operator=(const Polymorph& original) {
	if (this != &original) ASpell::operator=(original);
	return *this;
}

Polymorph::~Polymorph() {}

Polymorph* Polymorph::clone() const {
	return new Polymorph(*this);
}
