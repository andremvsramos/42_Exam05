/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:11:43 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:11:43 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# pragma once
# include "ATarget.hpp"

class BrickWall : public ATarget {

	public:
		BrickWall();
		// BrickWall(const BrickWall& og);
		// BrickWall& operator=(const BrickWall& og);
		virtual ~BrickWall();

		BrickWall*	clone() const;

};

#endif
