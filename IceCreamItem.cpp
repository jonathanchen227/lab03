#include "IceCreamItem.h"

IceCreamItem::IceCreamItem ( std::string s ) {
	size = s;
	price = 0.00;
}
std::string IceCreamItem::composeItem() {
	return "" ;
}
double IceCreamItem::getPrice() {
	return price;
}
