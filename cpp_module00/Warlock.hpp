/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:17:24 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 13:17:24 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock {

	private:
		std::string	name;
		std::string	title;
		Warlock();
		Warlock(const Warlock& original);
		Warlock& operator=(const Warlock& original);

	public:
		~Warlock();

		Warlock(const std::string& name, const std::string& title);

		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(const std::string& input);

		void	introduce() const;

};

#endif
