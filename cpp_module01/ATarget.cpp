/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:51:13 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/08 15:51:13 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() : _type("default") {}

ATarget::ATarget(const ATarget& original) : _type(original._type) {}

ATarget& ATarget::operator=(const ATarget& original) {
	if (this != &original) _type = original._type;
	return (*this);
}

ATarget::~ATarget() {}

ATarget::ATarget(const std::string& type) : _type(type) {}


std::string const& ATarget::getType() const {
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
