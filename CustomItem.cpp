#include "CustomItem.h"
CustomItem::~CustomItem() {
}
void CustomItem::addTopping(std::string topping) {
	toppings[topping]++;
	price += 0.40;
}
virtual std::string CustomItem::composeItem() {
	std::string s;
	s = "Custom Size: " + size + "\n" + "Toppings:" + "\n";
	for ( const auto& pair: toppings ) {
		s += pair.first;
		s += ": "
		s += pair.second;
		s += " oz";
		s += "\n";
	}
	s += "Price: $";
	s += price;
	return s;
}

