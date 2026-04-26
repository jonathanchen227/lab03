#include "PreMadeItem.h"
PreMadeItem : ~PreMadeItem() {}
virtual std::string PreMadeItem : composeItem() {
	std::string s;
	s = "Pre-made Size: " + size + "Pre-made Item: " + name + "Price: $" + pprice ;
	return s;
}
