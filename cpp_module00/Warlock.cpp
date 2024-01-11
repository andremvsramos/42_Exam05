/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:20:21 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/11 21:20:21 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() : _name("default"), _title("default") {}

Warlock::Warlock(const Warlock& original) {
	(void)original;
}

Warlock& Warlock::operator=(const Warlock& original) {
	(void)original;
	return *this;
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string& name, const std::string& title) :
	_name(name), _title(title) {
		std::cout << getName() << ": This looks like another boring day." << std::endl;
	}

std::string	const& Warlock::getName() const {
	return _name;
}

std::string const& Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(const std::string& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}
