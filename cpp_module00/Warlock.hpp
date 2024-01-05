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

class Warlock {

	private:
		std::string	_name;
		std::string	_title;
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

};

#endif
