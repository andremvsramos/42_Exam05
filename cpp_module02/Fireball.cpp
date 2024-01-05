/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:08:14 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:08:14 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(const Fireball& og) : ASpell(og) {}

Fireball& Fireball::operator=(const Fireball& og) {
	if (this != &og) ASpell::operator=(og);
	return (*this);
}

Fireball::~Fireball() {}


Fireball*	Fireball::clone() const {
	return (new Fireball(*this));
}
