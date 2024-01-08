/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:58:14 by andvieir          #+#    #+#             */
/*   Updated: 2024/01/08 15:58:14 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# pragma once
# include "ATarget.hpp"

class Dummy : public ATarget {

	public:
		Dummy();
		Dummy(const Dummy& original);
		Dummy& operator=(const Dummy& original);
		virtual ~Dummy();

		Dummy* clone() const;

};

#endif
