/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:38:13 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 15:38:13 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() : _type("default") {}

ATarget::ATarget(const ATarget& original) :
	_type(original.getType()) {}

ATarget& ATarget::operator=(const ATarget& original) {
	if (this != &original) _type = original.getType();
	return *this;
}

ATarget::~ATarget() {}


ATarget::ATarget(const std::string& type) : _type(type) {}


std::string const& ATarget::getType() const {
	return _type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << getType() << " has been " << spell.getFX() << "!" << std::endl;
}
