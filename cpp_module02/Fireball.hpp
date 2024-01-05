/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:59:49 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 14:59:49 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# pragma once
# include "ASpell.hpp"

class Fireball : public ASpell {

	public:
		Fireball();
		Fireball(const Fireball& original);
		Fireball& operator=(const Fireball& original);
		virtual ~Fireball();

		Fireball *clone() const;

};

#endif
