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

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# pragma once
# include "ASpell.hpp"

class Polymorph : public ASpell {

	public:
		Polymorph();
		// Polymorph(const Polymorph& original);
		// Polymorph& operator=(const Polymorph& original);
		virtual ~Polymorph();

		Polymorph *clone() const;

};

#endif
