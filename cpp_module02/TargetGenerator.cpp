/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:03:15 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 16:03:15 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& original) {
	(void)original;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& original) {
	(void)original;
	return *this;
}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget*>::iterator it;
	for (it = _targets.begin(); it != _targets.end(); it++)
		delete it->second;
	_targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget* target) {
	if (target)
		_targets.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const& target) {
	std::map<std::string, ATarget*>::iterator	it = _targets.find(target);
	if (it != _targets.end()) {
		delete it->second;
		_targets.erase(target);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& target) {
	std::map<std::string, ATarget*>::iterator	it = _targets.find(target);
	if (it != _targets.end()) return it->second;
	return NULL;
}
