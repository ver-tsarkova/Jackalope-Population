# Jackalope-Population
A program that calculates population growth of jackalopes as follows: 

Each generation, the jackalope population increases by 3% due to births and decreases by 1% due to deaths. Both the number of jackalopes who die and who are born will be rounded down (truncated) to an integer. See below for how to do this. So using a simple formula for calculating the number of jackalopes after a generation: If you start with 200 jackalopes, then 3% more are born, increasing the number to 206. 1% of the 206 die, decreasing the number to 204.

If you were to start with 132 jackalopes, then 3 would be born (132 * 0.03 = 3.96, rounded down to 3) and of the 135, 1 would die, leaving us with 134 jackalopes. The following generation, 3% of the 134 would produce 4 births, and 1% of 138 would produce 1 death, leaving us with 137. Note that this isn't the same result as if we simply add 2% each year. Also notice that you need to add births first before calculating deaths.
