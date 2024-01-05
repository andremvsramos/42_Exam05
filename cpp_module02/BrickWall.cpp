/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:12:56 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:12:56 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

// BrickWall::BrickWall(const BrickWall& og) : ATarget(og) {}

// BrickWall& BrickWall::operator=(const BrickWall& og) {
// 	if (this != &og) ATarget::operator=(og);
// 	return (*this);
// }

BrickWall::~BrickWall() {}


BrickWall*	BrickWall::clone() const {
	return (new BrickWall(*this));
}
