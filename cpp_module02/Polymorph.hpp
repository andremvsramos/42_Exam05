/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:04:04 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:04:04 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# pragma once
# include "ASpell.hpp"

class Polymorph : public ASpell {

	public:
		Polymorph();
		Polymorph(const Polymorph& og);
		Polymorph& operator=(const Polymorph& og);
		virtual ~Polymorph();

		Polymorph *clone() const;

};

#endif
