/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:38:40 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:38:40 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# pragma once
# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include "ATarget.hpp"
# include "ASpell.hpp"

class ASpell;

class SpellBook {

	private:
		SpellBook(const SpellBook& og);
		SpellBook& operator=(const SpellBook& og);
		std::map<std::string, ASpell*> _spellSlots;

	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & spell);
		ASpell*	createSpell(std::string const & spell);

};

#endif
