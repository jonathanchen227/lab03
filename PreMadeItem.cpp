#include "PreMadeItem.h"
#include "IceCreamItem.h"
#include <iomanip>
#include <sstream>
PreMadeItem :: ~PreMadeItem() {}
std::string PreMadeItem :: composeItem() const {
	std::ostringstream out;
	out << "Pre-made Size: " << size << "\n";
	out << "Pre-made Item: " << name << "\n";
	out << "Price: $" << std::fixed<< std::setprecision(2)<< price << "\n";
	return out.str();
	
}
