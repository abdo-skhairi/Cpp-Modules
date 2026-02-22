/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:46:44 by sabderra          #+#    #+#             */
/*   Updated: 2026/02/22 10:56:12 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int n)
{
	_rawBits = n << _fracBits;
}

Fixed::Fixed(float f)
{
	_rawBits = roundf(f * (1 << _fracBits));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_rawBits = other._rawBits;
	return *this;
}

Fixed::~Fixed(void) {}

float Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fracBits);
}

int Fixed::toInt(void) const
{
	return _rawBits >> _fracBits;
}

bool Fixed::operator>(const Fixed &other) const
{
	return _rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed &other) const
{
	return _rawBits < other._rawBits;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return _rawBits >= other._rawBits;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return _rawBits <= other._rawBits;
}

bool Fixed::operator==(const Fixed &other) const
{
	return _rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return _rawBits != other._rawBits;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits + other._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits - other._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	long temp = (long)_rawBits * (long)other._rawBits;
	result._rawBits = temp >> _fracBits;
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	long temp = ((long)_rawBits << _fracBits) / other._rawBits;
	result._rawBits = temp;
	return result;
}

Fixed &Fixed::operator++()
{
	_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_rawBits++;
	return temp;
}

Fixed &Fixed::operator--()
{
	_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_rawBits--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
