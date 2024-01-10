/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:24:58 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/10 19:24:58 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(const Dummy& original) : ATarget(original) {}

Dummy& Dummy::operator=(const Dummy& original) {
	if (this != &original) ATarget::operator=(original);
	return *this;
}

Dummy::~Dummy() {}

Dummy* Dummy::clone() const {
	return new Dummy(*this);
}
