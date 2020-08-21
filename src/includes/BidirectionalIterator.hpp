/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BidirectionalIterator.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:18:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/08/21 18:59:03 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIDIRECTIONALITERATOR_HPP
#define BIDIRECTIONALITERATOR_HPP

#include "Traits.hpp"
#include <cstddef>

namespace ft
{

template <typename T, typename N>
class bidirectional_iterator
{
public:
	typedef T value_type;
	typedef value_type &reference;
	typedef const value_type &const_reference;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef N node;
	typedef N *node_pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef bidirectional_iterator_tag iterator_category;
	typedef bidirectional_iterator self_type;

	bidirectional_iterator(node element)
	{
		this->element = element;
	}

	bidirectional_iterator(self_type const &other)
	{
		this->element = other.element;
	}

	~bidirectional_iterator()
	{
	}

	bidirectional_iterator &operator=(self_type const &other)
	{
		this->element = other.element;
		return (*this);
	}

	reference operator*()
	{
		return (*this->element);
	}

	const_reference operator*() const
	{
		return (*this->element);
	}

	pointer operator->()
	{
		return (&this->element.data);
	}

	const_pointer operator->() const
	{
		return (&this->element.data);
	}

	bool operator==(self_type const &other) const
	{
		if (this->element != other.element)
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
		this->element++;
		return (*this);
	}

	self_type operator++(int)
	{
		self_type tmp(*this);
		this->element++;
		return (tmp);
	}

	self_type &operator--()
	{
		this->element--;
		return (*this);
	}

	self_type operator--(int)
	{
		self_type tmp(*this);
		this->element--;
		return (tmp);
	}

private:
	node element;
};

template <typename T, typename N>
class reverse_bidirectional_iterator
{
public:
	typedef T value_type;
	typedef value_type &reference;
	typedef const value_type &const_reference;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef N node;
	typedef N *node_pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef bidirectional_iterator_tag iterator_category;
	typedef reverse_bidirectional_iterator self_type;

	reverse_bidirectional_iterator(node element)
	{
		this->element = element;
	}

	reverse_bidirectional_iterator(self_type const &other)
	{
		this->element = other.element;
	}

	~reverse_bidirectional_iterator()
	{
	}

	reverse_bidirectional_iterator &operator=(self_type const &other)
	{
		this->element = other.element;
		return (*this);
	}

	reference operator*()
	{
		return (*this->element);
	}

	const_reference operator*() const
	{
		return (*this->element);
	}

	pointer operator->()
	{
		return (&this->element.data);
	}

	const_pointer operator->() const
	{
		return (&this->element.data);
	}

	bool operator==(self_type const &other) const
	{
		if (this->element != other.element)
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
		this->element--;
		return (*this);
	}

	self_type operator++(int)
	{
		self_type tmp(*this);
		this->element--;
		return (tmp);
	}

	self_type &operator--()
	{
		this->element++;
		return (*this);
	}

	self_type operator--(int)
	{
		self_type tmp(*this);
		this->element++;
		return (tmp);
	}

private:
	node element;
};

} // namespace ft

#endif
