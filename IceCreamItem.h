#ifndef ICECREAMITEM_H
#define ICECREAMITEM_H

#include <string>

class IceCreamItem {
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".
	IceCreamItem(std::string s);

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	virtual std::string composeItem() const;
	// Returns the dollar amount of an ice cream item.
	virtual double getPrice() const;
protected:
	double price;
	std::string size;
};

#endif
