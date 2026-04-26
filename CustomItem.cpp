#include "CustomItem.h"
#include "IceCreamItem.h"
#include <iomanip>
#include <sstream>
CustomItem::~CustomItem() {
}
void CustomItem::addTopping(std::string topping) {
	toppings[topping]++;
	price += 0.40;
}
std::string CustomItem::composeItem() {
        std::ostringstream out;
	out << "Custom Size: " << size << "\n";
        out << "Toppings:\n";
	for ( const auto& pair: toppings ) {
		out << pair.first << ": " << pair.second << " oz\n";
	}
	out << "Price: $"<< std::fixed<< std::setprecision(2);
	return out.str();
}

