/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:47:50 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/12 18:47:51 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int					_rawBits;
        static const int	_fracBits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &other);
        Fixed(int n);
        Fixed(float f);
        Fixed &operator=(const Fixed &other);
        ~Fixed(void);

        int		getRawBits(void) const;
        void	setRawBits(int const raw);

        float	toFloat(void) const;
        int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
