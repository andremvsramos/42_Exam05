/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:11:43 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/05 18:11:43 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# pragma once
# include "ATarget.hpp"

class Dummy : public ATarget {

	public:
		Dummy();
		Dummy(const Dummy& og);
		Dummy& operator=(const Dummy& og);
		virtual ~Dummy();

		Dummy*	clone() const;

};

#endif
