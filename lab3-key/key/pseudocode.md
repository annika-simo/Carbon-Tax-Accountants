### Txbl Pseudocode:

1. Prompt the user for the appropriate inputs according to the specifications.
2. Gather the user's responses. 
3. Calculate the total revenue from energy production/distribution:

	a. multiply the total amount of generation (in kwH) by the revenue per kwH.

	b. store that value in a variable named `revenue_from_generation`.

4. Calculate the company's tax credits:

	a. calculate the company's total number of kwHs generated sustainably and multiply that by the credit per kwH for sustainably generated energy.

	b. store that value in a variable named `credits_from_sustainable_generation`.

5. Calculate the company's total tax bill:
	a. `subtract credits_from_sustainable_generation` from `revenue_from_generation`.
	b. store that value in a variable named `total_taxable_revenue`.

6. Calculate the company's tax bill per share:

	a. divide `total_taxable_revenue` by the number of shares outstanding.

	b. store that value in a variable named `taxable_revenue_per_share`.

7. Output the company name, total taxable revenue and taxable revenue per share according to the specifications.