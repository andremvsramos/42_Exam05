/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:17:26 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 13:17:26 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(const Warlock& original) {
	(void)original;
}

Warlock&	Warlock::operator=(const Warlock& original) {
	(void)original;
	return (*this);
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string& name, const std::string& title) :
	name(name), title(title) {

	std::cout << getName() << ": This looks like another boring day." << std::endl;
}


std::string const& Warlock::getName() const {
	return (name);
}

std::string const& Warlock::getTitle() const {
	return (title);
}

void	Warlock::setTitle(const std::string& input) {
	title = input;
}


void	Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell) {
	if(spell)
		_slots.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(std::string spell) {
	std::map<std::string, ASpell*>::iterator	it;
	it = _slots.find(spell);
	if (it != _slots.end()) {
		delete it->second;
		_slots.erase(spell);
	}
}

void	Warlock::launchSpell(std::string spell, const ATarget& target) {
	std::map<std::string, ASpell*>::iterator	it;
	it = _slots.find(spell);
	if (it != _slots.end()) it->second->launch(target);
}
