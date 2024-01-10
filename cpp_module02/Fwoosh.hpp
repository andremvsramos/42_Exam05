/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:20:47 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/10 19:20:47 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# pragma once
# include "ASpell.hpp"

class Fwoosh : public ASpell {

	public:
		Fwoosh();
		Fwoosh(const Fwoosh& original);
		Fwoosh& operator=(const Fwoosh& original);
		virtual ~Fwoosh();

		Fwoosh* clone() const;
};

#endif
