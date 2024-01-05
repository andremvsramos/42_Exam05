/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:55:08 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 17:55:08 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# pragma once
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget {

	protected:
		std::string _type;

	public:
		ATarget();
		ATarget(const ATarget& og);
		ATarget& operator=(const ATarget& og);
		virtual ~ATarget();

		ATarget(const std::string& type);

		std::string const& getType() const;

		void	getHitBySpell(const ASpell& spell) const;

		virtual ATarget *clone() const = 0;

};

#endif
