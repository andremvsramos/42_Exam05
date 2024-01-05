/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:04:04 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:04:04 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# pragma once
# include "ASpell.hpp"

class Fwoosh : public ASpell {

	public:
		Fwoosh();
		Fwoosh(const Fwoosh& og);
		Fwoosh& operator=(const Fwoosh& og);
		virtual ~Fwoosh();

		Fwoosh *clone() const;

};

#endif
