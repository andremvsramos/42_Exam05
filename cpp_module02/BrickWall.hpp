/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:06:46 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 15:06:46 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BrickWall_HPP
# define BrickWall_HPP

# pragma once
# include "ATarget.hpp"

class BrickWall : public ATarget {

	public:
		BrickWall();
		// BrickWall(const BrickWall& original);
		// BrickWall& operator=(const BrickWall& original);
		virtual ~BrickWall();

		BrickWall *clone() const;
};

#endif
