#include "IceCreamItem.h"

IceCreamItem::IceCreamItem ( std::string s ) {
	size = s;
	price = 0.00;
}
std::string IceCreamItem::composeItem() const {
	return "" ;
}
double IceCreamItem::getPrice() const{
	return price;
}
