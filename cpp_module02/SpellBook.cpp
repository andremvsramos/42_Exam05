/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:16 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:42:16 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook& og) {
	(void)og;
}

SpellBook& SpellBook::operator=(const SpellBook& og) {
	(void)og;
	return (*this);
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it;
	for (it = _spellSlots.begin(); it != _spellSlots.end(); it++)
		delete it->second;
	_spellSlots.clear();
}

void	SpellBook::learnSpell(ASpell* spell) {
	if (spell)
		_spellSlots.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell(std::string const & spell) {
	std::map<std::string, ASpell*>::iterator it;
	it = _spellSlots.find(spell);
	if (it != _spellSlots.end()) {
		delete it->second;
		_spellSlots.erase(spell);
	}
}

ASpell*	SpellBook::createSpell(std::string const & spell) {
	std::map<std::string, ASpell*>::iterator it;
	it = _spellSlots.find(spell);
	if (it != _spellSlots.end()) return it->second;
	else return NULL;
}
