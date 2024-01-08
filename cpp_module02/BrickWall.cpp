/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:59:31 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/08 15:59:31 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(const BrickWall& original) : ATarget(original) {}

BrickWall& BrickWall::operator=(const BrickWall& original) {
	if (this != &original) ATarget::operator=(original);
	return (*this);
}

BrickWall::~BrickWall() {}

BrickWall*	BrickWall::clone() const {
	return (new BrickWall(*this));
}
