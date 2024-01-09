/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:31:22 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 15:31:22 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() : _name("default"), _fx("default") {}

ASpell::ASpell(const ASpell& original) :
	_name(original.getName()), _fx(original.getFX()) {}

ASpell& ASpell::operator=(const ASpell& original) {
	if (this != &original) {
		_name = original.getName();
		_fx = original.getFX();
	}
	return *this;
}

ASpell::~ASpell() {}

ASpell::ASpell(const std::string& name, const std::string& fx) :
	_name(name), _fx(fx) {}


std::string const& ASpell::getName() const {
	return _name;
}

std::string const& ASpell::getFX() const {
	return _fx;
}

void	ASpell::launch(const ATarget& target) {
	target.getHitBySpell(*this);
}
