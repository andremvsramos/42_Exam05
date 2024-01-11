/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:17:43 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/11 21:17:43 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# pragma once
# include <iostream>
# include <string>

class Warlock {

	private:
		Warlock();
		Warlock(const Warlock& original);
		Warlock& operator=(const Warlock& original);
		std::string	_name;
		std::string	_title;

	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(const std::string& title);
		void	introduce() const;
};

#endif
