/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:19:47 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/09 15:19:47 by andvieir         ###   ########.fr       */
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

class Warlock {

	private:
		Warlock();
		Warlock(const Warlock& original);
		Warlock& operator=(const Warlock& original);
		std::string	_name;
		std::string _title;
		std::map<std::string, ASpell*> _slots;

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
