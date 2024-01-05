/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:38:53 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 17:38:53 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(const Warlock& og) {
	(void)og;
}

Warlock& Warlock::operator=(const Warlock& og) {
	(void)og;
	return (*this);
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
}


Warlock::Warlock(const std::string& name, const std::string& title) :
	_name(name), _title(title) {

	std::cout << getName() << ": This looks like another boring day." << std::endl;
}


std::string const& Warlock::getName() const {
	return (_name);
}

std::string const& Warlock::getTitle() const {
	return (_title);
}

void	Warlock::setTitle(const std::string& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	if (spell)
		_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell) {
	_spellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, const ATarget& target) {
	ASpell *toLaunch = _spellBook.createSpell(spell);
	if (toLaunch) toLaunch->launch(target);
}
