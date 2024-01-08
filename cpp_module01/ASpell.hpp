/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:41:06 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/08 15:41:06 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# pragma once
# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell {

	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell();
		ASpell(const ASpell& original);
		ASpell& operator=(const ASpell& original);
		virtual ~ASpell();

		ASpell(const std::string& name, const std::string& fx);

		std::string const& getName() const;
		std::string const& getEffects() const;

		void	launch(const ATarget& target);

		virtual ASpell* clone() const = 0;

};

#endif
