# Carbon-Tax-Accountants
CS2021 Lab 3

## Introduction
Energy producers like Duke Energy, NRG Energy, Southern Co, NextEra Energy and the [Tennessee Valley Authority](https://en.wikipedia.org/wiki/Tennessee_Valley_Authority) generate power and distribute it to customers who use it in their homes and businesses. In the [Greater](https://psc.ky.gov/agencies/psc/images/Electric_Service_Areas_Wall_Map.pdf) [Cincinnati](https://sustainabilityreport.duke-energy.com/img/tables/2018_Duke-Energy_Intro_Maps_Services_Territories.png.png) Area, [Duke Energy](https://www.duke-energy.com/home) provides power for most homes and businesses. In the past, most of these energy distributors produced their energy by burning coal, oil or natural gas. For sustainability and economic reasons, these companies are shifting to production of energy with solar panels, wind farms and dams (hydro). 

Energy generation and distribution is measured in kilowatt hours. Energy companies report how many kilowatt hours they produce and bill customers based on how many kilowatt hours they consume. According to some recent [data](https://www.citact.org/utility-rates-and-regulation-issues-utility-duke-energy/news/average-duke-energy-electric-bill), for every kilowatt hour that an energy company supplies to a customer, they make $0.114951.

Companies are taxed based on their revenue and are expected to report total taxable revenue and taxable revenue per share. Their companies' accountants take their total energy production/distribution (in kilowatt hours) and multiply it by how much they charge the customer (per kilowatt hour of usage) to determine their total taxable revenue. Then, the accountants divide that number by the total number of ownership [shares outstanding](https://www.investopedia.com/terms/o/outstandingshares.asp) to determine their companies' taxable revenue per share. These figures, however, are only provisional!

Over the years, the government has incentivized these companies to shift production to renewable sources of energy. Thanks to these enticements, companies receive a monetary tax credit for each unit of energy that they produce sustainably. That credit significantly lowers their tax bill. According to the most recent [data](https://www.eia.gov/todayinenergy/detail.php?id=4657), the credit is $0.018 per kilowatt hour generated sustainably.

The number of kilowatt hours generated sustainably is multiplied by the per-kilowatt-hour tax credit to calculate the companies' total tax credit. The accountants recalculate their company's total taxable revenue by subtracting the total tax credit from the provisionally calculated total revenue. Finally, they divide that number by the total outstanding shares to get an updated taxable revenue per share.

These two figures are their company's final total taxable revenue and total taxable revenue per share.

Your programming task in this lab is to create the Txbl app, an energy company tax calculation application. *Txbl* takes 6 inputs:
1. the name of the energy company,
2. the total amount of energy the company generated in the year from all sources,
3. the total amount of energy the company generated from solar in the year,
4. the total amount of energy the company generated from wind in the year,
5. the total amount of energy the company generated from water/hydro in the year,
6. the total number of shares outstanding
and will
1. calculate the total taxable revenue,
2. calculate the taxable revenue per share, and
3. print a formatted tax report to the console.

Please be sure to read the entire lab document before beginning!

Good luck and have fun!

## Program Design Task
As my dad always said, ???If you cut multiple times, make sure it's not to spite your face.??? Before you start writing code, please write the pseudocode for your implementation of the *Txbl* application.

## Program Design Requirements
Your pseudocode or flow chart must describe the entirety of the solution. You may choose to write the flow chart or the pseudocode at any level of detail but, remember, that this is a tool for you! Your pseudocode or flow chart must include a description of how you plan
1. to calculate the total the company's total revenue from energy production/distribution,
2. to calculate the company's tax credits,
3. to calculate the company's total tax bill,
4. total calculate the company's tax bill per outstanding share, and
5. to seek input from the user and present output to the console.

## Programming Task
Your programming task is to write a program that prompts the user for six (6) different inputs:
1. the name of the energy company,
2. the total amount of energy the company generated in the year from all sources,
3. the total amount of energy the company generated from solar in the year,
4. the total amount of energy the company generated from wind in the year,
5. the total amount of energy the company generated from water/hydro in the year,
6. the total number of shares outstanding
(in that order), calculates:
1. the total taxable revenue,
2. the taxable revenue per share, and
and outputs the results of the calculations in the following format:

```
Revenue Per Share Report Generator
================================================================================
Prepared For:                                                        Duke Energy
Taxable Total Revenue:                                                    563.96
Taxable Revenue Per Share:                                                  1.13
================================================================================
```

Your program should seek user input with the following prompts:

```
Enter company name:
Enter the total energy generation (in kwH):
Enter solar generation (in kwH):
Enter wind generation (in kwH):
Enter hydro generation (in kwH):
Enter shares outstanding:
```

Your output must follow this specification:
1. The output is no more than 80 columns wide.
2. You may not generate the horizontal lines with 80 =s.
3. Output of dollars and cents is not prefixed with $.
4. Output of cents must be rounded to two decimal places.
5. The company name, total revenue and revenue per share must be right aligned.
6. The company name cannot be longer than 40 characters.

You may assume
1. Even after tax credits, the company's tax bill (total and per outstanding share) will be positive.
2. Energy generation is measured in whole numbers.
3. The company's tax bill (total and per outstanding share) will require fewer than 40 characters to print (in DDD.CC format).

Example program input/output:
```
Enter company name: Duke Energy
Enter the total energy generation (in kwH): 5000
Enter solar generation (in kwH): 200
Enter wind generation (in kwH): 200
Enter hydro generation (in kwH): 200
Enter shares outstanding: 500
Revenue Per Share Report Generator
================================================================================
Prepared For:                                                        Duke Energy
Taxable Total Revenue:                                                    563.96
Taxable Revenue Per Share:                                                  1.13
================================================================================
```

*Note:* Your program will be tested against other test cases. Your program must compute properly in all cases in order to receive full points! Check the output of the autograder to make sure that your program behaves as expected. Read the autograder's output carefully!

## Programming Requirements
If you are a Windows user, begin with the skeleton code in this repository. The skeletons provide function that you will need to successfully complete this lab.

1. Your program must prompt the user for input using exactly the specified format.
2. Your program must display output using exactly the specified format.
3. Your program must use named constants to hold
   1. the revenue per kilowatt hour;
   2. the credit per kilowatt hour value; and
   3. the maximum length of the company name.
4. Your program must use intermediate variables (of the appropriate type) to store the results of its calculations before printing them to the console.
5. Your program must use meaningful variable names.
6. Your program must call the provided functions to gather user input.
7. Your program must use compound assignment operators when gathering the total number of kilowatt hours generated sustainably.
8. Your program must call the provided function to truncate the name of the company to the appropriate maximum length.
9. Your program must contain a multi-line comment before the main function describing the purpose of the program. The text in the comment must be grammatically correct and accurately describe the program???s purpose, but not its operation.

## Critical Thinking Task
In class we talked about how functions are a means of abstraction, of hiding details. The user of the function only cares what the function does and not how it does it. Programmers can read the declaration of a function and know how to call it. This concept has real-world parallels. Consider a restaurant where the kitchen is a function. The menu is like a function declaration. It has a list of all the items that a diner can order from the kitchen (the function names) and the ways that they can customize those dishes (parameters). When the diner tell the waitstaff that they would like their fajitas to have chicken rather than steak, they are calling a function with arguments. Later, the sizzling fajitas come from the kitchen to their table (the return value). As a customer, neither do they see the kitchen nor do they care how the food is prepared. All they care about is that it tastes good!

Your critical thinking task is to come up with a physical analogy (like the one above) for functions.

## Critical Thinking Requirements
Your analogy must incorporate the concepts of function declaration, parameters/arguments, call, and return! Please use no more than 200 words. If you'd like, you may use external resources but you must provide proper documentation. The choice of formatting for external references is up to you, but you may find it helpful to consult the Purdue OWL for help (Links to an external site.). The Purdue OWL also has extensive information on ways to avoid plagiarism (Links to an external site.).

## Deliverables
1. The pseudocode describing the algorithm of your Txbl program in PDF format (named `design.pdf`).
2. The C++ source code for your Txbl application (named `Txbl.cpp`).
3. A written response to the Critical Thinking Task prompt in PDF format (named `abstraction.pdf`).

## Related Learning Objectives
1. Students will understand abstraction.
2. Students will use named constants effectively to increase code readability.
3. Students will be able to use IO Manipulators to properly format console output.
4. Students will be able to call a function and use its result.
5. Students will be able to use compound assignment operators.
