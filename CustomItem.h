#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <string>
#include <map>
class CustomItem : public IceCreamItem {
	protected: 
		std::map<std::string, int > toppings;
	public:
		CustomItem(std::string s) : IceCreamItem(s) {
			if ( size == "small" ) {
				price = 3.00;
			}
			else if ( size == "medium" ) {
				price = 5.00;
			}
			else {
				price = 6.50;
			}
		}
		virtual ~CustomItem();
		virtual void addTopping(std::string topping);
		virtual std::string composeItem();
};

#endif
