#include <iostream>
#include <string>
#include <iomanip>

/**
 * @brief Truncate a string to a certain length.
 *
 * @param value The string to truncate.
 * @param width The length to which to truncate \p value.
 * @return std::string The truncated string.
 */
std::string truncate_string(const std::string &value, int width) {
  return value.substr(0, width);
}

/**
 * @brief Get an integer from the user
 *
 * @return int The user's input, as an integer.
 */
int get_int() {
  int value{0};
  std::cin >> value;
  return value;
}

/**
 * @brief Get a string from the user.
 *
 * @return std::string The user's input, as a string.
 */
std::string get_string() {
  std::string value{""};
  std::getline(std::cin, value);
  return value;
}

const double REV_PER_KWH{ 0.114951 };
const double CRED_PER_KWH{ 0.018 };
const int NAME_MAX_LENGTH{ 40 };

/*
 * This script asks the user for inputs for company name, energy 
 * generated from all sources, energy generated from solar, 
 * energy generated from wind, energy generated from water/hydro, 
 * and shares outstanding. It then calcutes and outputs the total 
 * taxable revenue and the taxable revenue per share in a formatted
 * tax report.
 */

int main() { 
	std::string coName;
	double totalAllSources;
	double totalSolar;
	double totalWind;
	double totalHydro;
	int sharesOutstanding;

	double taxRev;
	double genSustain;
	double totalTaxCred;
	double totalTaxRev;
	double taxRevPerShare;


	std::cout << "Enter company name: ";
	coName = get_string();

	std::cout << "Enter the total energy generation (in kwH): ";
	totalAllSources = get_int();

	std::cout << "Enter solar generation (in kwH): ";
	totalSolar = get_int();

	std::cout << "Enter wind generation (in kwH): ";
	totalWind = get_int();

	std::cout << "Enter hydro generation (in kwH): ";
	totalHydro = get_int();

	std::cout << "Enter shares outstanding: ";
	sharesOutstanding = get_int();

	taxRev = totalAllSources * REV_PER_KWH;
	genSustain = totalSolar + totalWind + totalHydro;
	totalTaxCred = genSustain * CRED_PER_KWH;
	totalTaxRev = taxRev - totalTaxCred;
	taxRevPerShare = totalTaxRev / sharesOutstanding;

	std::cout << "Revenue Per Share Report Generator" << std::endl;
	std::cout << std::setfill('=') << std::setw(80) << "" << std::endl;
	std::cout << "Prepared For: " << std::setfill(' ') << std::setw(66) << truncate_string(coName, NAME_MAX_LENGTH) << std::endl;
	std::cout << "Taxable Total Revenue: " << std::setfill(' ') << std::setw(57) << std::fixed << std::setprecision(2) << totalTaxRev << std::endl;
	std::cout << "Taxable Revenue Per Share: " << std::setfill(' ') << std::setw(53) << taxRevPerShare << std::endl;
	std::cout << std::setfill('=') << std::setw(80) << "" << std::endl;


	return 0;
}
