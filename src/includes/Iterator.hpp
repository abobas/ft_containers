/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iterator.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:18:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/08/04 16:56:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <cstddef>

namespace ft
{

class random_access_iterator_tag
{
};

class bidirectional_iterator_tag
{
};
class forward_iterator_tag
{
};
class input_iterator_tag
{
};

class output_iterator_tag
{
};

template <typename T, typename T_pointer, typename T_reference>
class random_access_iterator
{
public:
	typedef T value_type;
	typedef T_reference reference;
	typedef T_pointer pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef random_access_iterator_tag iterator_category;
	typedef random_access_iterator self_type;

	random_access_iterator(pointer elements)
	{
		this->elements = elements;
	}

	random_access_iterator(self_type const &other)
	{
		this->elements = other.elements;
	}

	~random_access_iterator()
	{
	}

	random_access_iterator &operator=(self_type const &other)
	{
		this->elements = other.elements;
		return (*this);
	}

	reference operator*()
	{
		return (*this->elements);
	}

	bool operator==(self_type const &other) const
	{
		if (this->elements != other.elements)
			return (false);
		return (true);
	}

	bool operator!=(self_type const &other) const
	{
		if (*this == other)
			return (false);
		return (true);
	}

	self_type &operator++()
	{
		this->elements++;
		return (*this);
	}

	self_type &operator++(int)
	{
		this->elements++;
		return (*this);
	}

	self_type &operator+(difference_type n)
	{
		this->elements += n;
		return (*this);
	}

	self_type &operator+=(difference_type n)
	{
		this->elements += n;
		return (*this);
	}

	self_type &operator--()
	{
		this->elements--;
		return (*this);
	}

	self_type &operator--(int)
	{
		this->elements--;
		return (*this);
	}

	self_type &operator-(difference_type n)
	{
		this->elements -= n;
		return (*this);
	}

	self_type &operator-=(difference_type n)
	{
		this->elements -= n;
		return (*this);
	}

private:
	pointer elements;
};

template <typename T, typename T_pointer, typename T_reference>
class reverse_random_access_iterator
{
public:
	typedef T value_type;
	typedef T_reference reference;
	typedef T_pointer pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef random_access_iterator_tag iterator_category;
	typedef reverse_random_access_iterator self_type;

	reverse_random_access_iterator(pointer elements)
	{
		this->elements = elements;
	}

	reverse_random_access_iterator(self_type const &other)
	{
		this->elements = other.elements;
	}

	~reverse_random_access_iterator()
	{
	}

	reverse_random_access_iterator &operator=(self_type const &other)
	{
		this->elements = other.elements;
		return (*this);
	}

	reference operator*()
	{
		return (*this->elements);
	}

	bool operator==(self_type const &other) const
	{
		if (this->elements != other.elements)
			return (false);
		return (true);
	}

	bool operator!=(self_type const &other) const
	{
		if (*this == other)
			return (false);
		return (true);
	}

	self_type &operator++()
	{
		this->elements--;
		return (*this);
	}

	self_type &operator++(int)
	{
		self_type(*this);
		this->elements--;
		return (*this);
	}

	self_type &operator+(difference_type n)
	{
		self_type(*this);
		this->elements -= n;
		return (*this);
	}

	self_type &operator+=(difference_type n)
	{
		this->elements -= n;
		return (*this);
	}

	self_type &operator--()
	{
		this->elements++;
		return (*this);
	}

	self_type &operator--(int)
	{
		self_type(*this);
		this->elements++;
		return (*this);
	}

	self_type &operator-(difference_type n)
	{
		self_type(*this);
		this->elements += n;
		return (*this);
	}

	self_type &operator-=(difference_type n)
	{
		this->elements += n;
		return (*this);
	}

private:
	pointer elements;
};

} // namespace ft

#endif
