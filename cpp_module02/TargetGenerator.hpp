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

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# pragma once
# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include "ATarget.hpp"
# include "ASpell.hpp"

class ATarget;

class TargetGenerator {

	private:
		TargetGenerator(const TargetGenerator& og);
		TargetGenerator& operator=(const TargetGenerator& og);
		std::map<std::string, ATarget*> _targets;

	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const & target);
		ATarget*	createTarget(std::string const & target);

};

#endif
