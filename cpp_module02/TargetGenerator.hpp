/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:45:59 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 16:45:59 by andvieir         ###   ########.fr       */
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

class TargetGenerator {

	private:
		TargetGenerator(const TargetGenerator& original);
		TargetGenerator& operator=(const TargetGenerator& original);
		std::map<std::string, ATarget*>	_targets;

	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const & target);
		ATarget	*createTarget(std::string const & target);

};

#endif
