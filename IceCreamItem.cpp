#include "IceCreamItem.h"

IceCreamItem::IceCreamItem ( std::string size ) {
	this->size = size;
	price = 0.00;
}
std::string IceCreamItem::composeItem() {
	return "";
}

double IceCreamItem::getPrice() {
	return price;
}
