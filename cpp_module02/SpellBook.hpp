/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:00:39 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 16:00:39 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# pragma once
# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include "ASpell.hpp"

class SpellBook {

	private:
		SpellBook(const SpellBook& original);
		SpellBook& operator=(const SpellBook& original);
		std::map<std::string, ASpell*> _slots;

	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const& spell);
		ASpell*	createSpell(std::string const& spell);

};

#endif
