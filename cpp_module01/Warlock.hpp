/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:35:23 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 17:35:23 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# pragma once
# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock {

	private:
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell*> _spellSlots;
		Warlock();
		Warlock(const Warlock& og);
		Warlock& operator=(const Warlock& og);

	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(const std::string& title);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, const ATarget& target);

};

#endif
