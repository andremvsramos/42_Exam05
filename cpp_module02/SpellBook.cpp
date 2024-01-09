/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:03:15 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 16:03:15 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook& original) {
	(void)original;
}

SpellBook& SpellBook::operator=(const SpellBook& original) {
	(void)original;
	return *this;
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it;
	for (it = _slots.begin(); it != _slots.end(); it++)
		delete it->second;
	_slots.clear();
}

void	SpellBook::learnSpell(ASpell* spell) {
	if (spell)
		_slots.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell(std::string const& spell) {
	std::map<std::string, ASpell*>::iterator	it = _slots.find(spell);
	if (it != _slots.end()) {
		delete it->second;
		_slots.erase(spell);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spell) {
	std::map<std::string, ASpell*>::iterator	it = _slots.find(spell);
	if (it != _slots.end()) return it->second;
	return NULL;
}
