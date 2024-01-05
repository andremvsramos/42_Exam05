/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:59:47 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 14:59:47 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(const Fireball& original) : ASpell(original) {}

Fireball& Fireball::operator=(const Fireball& original) {
	if (this != &original) ASpell::operator=(original);
	return (*this);
}

Fireball::~Fireball() {}

Fireball *Fireball::clone() const {
	return (new Fireball(*this));
}
