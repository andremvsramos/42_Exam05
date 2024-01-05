/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:16 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:42:16 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& og) {
	(void)og;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& og) {
	(void)og;
	return (*this);
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

void	TargetGenerator::forgetTargetType(std::string const & target) {
	std::map<std::string, ATarget*>::iterator it;
	it = _targets.find(target);
	if (it != _targets.end()) {
		delete it->second;
		_targets.erase(target);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const & target) {
	std::map<std::string, ATarget*>::iterator it;
	it = _targets.find(target);
	if (it != _targets.end()) return it->second;
	return NULL;
}
