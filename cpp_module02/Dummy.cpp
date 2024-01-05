/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:12:56 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:12:56 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(const Dummy& og) : ATarget(og) {}

Dummy& Dummy::operator=(const Dummy& og) {
	if (this != &og) ATarget::operator=(og);
	return (*this);
}

Dummy::~Dummy() {}


Dummy*	Dummy::clone() const {
	return (new Dummy(*this));
}
