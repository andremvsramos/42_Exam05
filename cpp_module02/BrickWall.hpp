/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:39:50 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/11 21:39:50 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# pragma once
# include "ATarget.hpp"

class BrickWall : public ATarget {

	public:
		BrickWall();
		BrickWall(const BrickWall& original);
		BrickWall& operator=(const BrickWall& original);
		virtual ~BrickWall();
		BrickWall* clone() const;
};

#endif
