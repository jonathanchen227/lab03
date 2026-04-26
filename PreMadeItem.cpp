#include "PreMadeItem.h"
#include "IceCreamItem.h"
PreMadeItem :: ~PreMadeItem() {}
std::string PreMadeItem :: composeItem() {
	std::string s;
	s = "Pre-made Size: " + size + "\n";
	s += "Pre-made Item: " + name + "\n";
	s += "Price: $" + std::to_string(price);
	return s;
}
