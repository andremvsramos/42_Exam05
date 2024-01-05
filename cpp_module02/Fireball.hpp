/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:04:04 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:04:04 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# pragma once
# include "ASpell.hpp"

class Fireball : public ASpell {

	public:
		Fireball();
		Fireball(const Fireball& og);
		Fireball& operator=(const Fireball& og);
		virtual ~Fireball();

		Fireball *clone() const;

};

#endif
