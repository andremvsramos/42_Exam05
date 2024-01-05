/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:57:49 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 17:57:49 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() : _type("DefaultType") {}

ATarget::ATarget(const ATarget& og) : _type(og.getType()) {}

ATarget& ATarget::operator=(const ATarget& og) {
	if (this != &og) _type = og.getType();
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
