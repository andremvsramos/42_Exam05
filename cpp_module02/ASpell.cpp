/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:10:16 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 14:10:16 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() : _name("DefaultName"), _effects("DefaultFX") {}

ASpell::ASpell(const ASpell& original) :
	_name(original._name), _effects(original._effects) {}

ASpell&	ASpell::operator=(const ASpell& original) {
	if (this != &original) {
		_name = original._name;
		_effects = original._effects;
	}
	return (*this);
}

ASpell::~ASpell() {}


ASpell::ASpell(const std::string& name, const std::string& fx) :
	_name(name), _effects(fx) {}

std::string const& ASpell::getName() const {
	return (_name);
}

std::string const& ASpell::getEffects() const {
	return (_effects);
}

void ASpell::launch(const ATarget& target) {
	target.getHitBySpell(*this);
}
