#include <iomanip>
#include <iostream>
#include <string>

/** Truncate a string to a certain length.
 * 
 * @param value The string to truncate.
 * @param width The length to which to truncate \p value.
 * @return std::string The truncated string.
 */
std::string truncate_string(const std::string &value, int width) {
  return value.substr(0, width);
}

/** Get an integer from the user
 * 
 * @return int The user's input, as an integer.
 */
int get_int() {
  int value{0};
  std::cin >> value;
  return value;
}

/** Get a string from the user.
 * 
 * @return std::string The user's input, as a string.
 */
std::string get_string() {
  std::string value{""};
  std::getline(std::cin, value);
  return value;
}

/*
 * Source:
 * https://www.citact.org/utility-rates-and-regulation-issues-utility-duke-energy/news/average-duke-energy-electric-bill
 */
const double REVENUE_PER_KWH{0.114951};
/*
 * Source:
 * https://www.eia.gov/todayinenergy/detail.php?id=46576
 */
const double TAX_CREDIT_PER_KWH{0.018};

/*
 * Specify the fixed-width label sizes of the
 * label and value fields.
 */
const int REPORT_VALUE_WIDTH{40};
const int REPORT_LABEL_WIDTH{40};

/*
 * This program will calculate the total taxable revenue
 * and the taxable revenue per share of an energy company
 * according to normal GAAP standards subject to credits
 * for producing renewably.
 */
int main() {
  int total_generation{0};
  int total_sustainable_generation{0};

  std::cout << "Enter company name: ";
  std::string company_name = get_string();
  std::cout << "Enter the total energy generation (in kwH): ";
  total_generation = get_int();
  std::cout << "Enter solar generation (in kwH): ";
  total_sustainable_generation += get_int();
  std::cout << "Enter wind generation (in kwH): ";
  total_sustainable_generation += get_int();
  std::cout << "Enter hydro generation (in kwH): ";
  total_sustainable_generation += get_int();
  std::cout << "Enter shares outstanding: ";
  int shares_outstanding = get_int();

  double revenue_from_generation{total_generation * REVENUE_PER_KWH};
  double credits_from_sustainable_generation{total_sustainable_generation * TAX_CREDIT_PER_KWH};

  double total_taxable_revenue{revenue_from_generation - credits_from_sustainable_generation};
  double taxable_revenue_per_share{total_taxable_revenue / shares_outstanding};

  std::cout << "Revenue Per Share Report Generator\n";
  std::cout << std::setfill('=') << std::setw(REPORT_LABEL_WIDTH + REPORT_VALUE_WIDTH) << "" << "\n";

  std::cout << std::setfill(' ') << std::left << std::setw(REPORT_LABEL_WIDTH) << "Prepared For:";
  std::cout << std::setw(REPORT_VALUE_WIDTH) << std::right
            << truncate_string(company_name, REPORT_VALUE_WIDTH) << "\n";

  std::cout << std::left << std::setw(REPORT_LABEL_WIDTH) << "Taxable Total Revenue: ";
  std::cout << std::setw(REPORT_VALUE_WIDTH) << std::right << std::fixed << std::setprecision(2)
            << total_taxable_revenue << "\n";

  std::cout << std::left << std::setw(REPORT_LABEL_WIDTH) << "Taxable Revenue Per Share: ";
  std::cout << std::setw(REPORT_VALUE_WIDTH) << std::right << std::fixed << std::setprecision(2)
            << taxable_revenue_per_share << "\n";

  std::cout << std::setfill('=') << std::setw(REPORT_LABEL_WIDTH + REPORT_VALUE_WIDTH) << "" << "\n";

  return 0;
}
