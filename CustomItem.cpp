#include "CustomItem.h"
#include "IceCreamItem.h"

CustomItem::~CustomItem() {
}
void CustomItem::addTopping(std::string topping) {
	toppings[topping]++;
	price += 0.40;
}
std::string CustomItem::composeItem() {
        std::string s;
	s = "Custom Size: " + size + "\n" + "Toppings:" + "\n";
	for ( const auto& pair: toppings ) {
		s += pair.first;
		s += ": ";
		s += std::to_string(pair.second);
		s += " oz";
		s += "\n";
	}
	s += "Price: $";
        s += std::to_string(price);
	return s;
}

