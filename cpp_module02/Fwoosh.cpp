/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:21:53 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/10 19:21:53 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const Fwoosh& original) : ASpell(original) {}

Fwoosh& Fwoosh::operator=(const Fwoosh& original) {
	if (this != &original) ASpell::operator=(original);
	return *this;
}

Fwoosh::~Fwoosh() {}

Fwoosh* Fwoosh::clone() const {
	return new Fwoosh(*this);
}
