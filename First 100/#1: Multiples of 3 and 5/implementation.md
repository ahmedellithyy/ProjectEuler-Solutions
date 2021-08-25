Here's the explanation of the solution of #1: Multiples of 3 and 5.

**Problem Description:**
  - If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6, and 9. The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below N.

**Solution:**

Firstly, we get the number of multiplies of 3 that is under N for exapmle let's consider N = 3. So the number of multplies of 3 under 100 is (100-1)/3 which is 33. The same approach we will do for 5 and 15. 

Secondly, we will use arithmetic sequence sum formula to calculate the sum of multiplies of 3 and 5. 

Thirdly, we need to subtract the summation of multiplies of 15.

But why 15 and we just want to calculate the summation of multiplies of 3 and 5?
  - Because we can find while calculating the summations of multiplies of 3 and 5, for example 30 will be summed twice. Once in 3's and once in 5's. So we need to subtract one time of them.
