#include "IceCreamItem.h"
#include <string>
class PreMadeItem: public IceCreamItem {
	protected: 
		std::string name;
	public:
PreMadeItem(std::string n , std::string s ) : IceCreamItem(s){ 
	name = n;
	if ( s == "small" ) { price = 4.00; }
	if ( s == "medium") { price = 6.00; }
	if ( s== "large") {price = 7.50;}
}
virtual ~PreMadeItem();
virtual std::string composeItem();
};

