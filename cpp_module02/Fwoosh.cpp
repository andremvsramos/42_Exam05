/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:08:14 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:08:14 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const Fwoosh& og) : ASpell(og) {}

Fwoosh& Fwoosh::operator=(const Fwoosh& og) {
	if (this != &og) ASpell::operator=(og);
	return (*this);
}

Fwoosh::~Fwoosh() {}


Fwoosh*	Fwoosh::clone() const {
	return (new Fwoosh(*this));
}
