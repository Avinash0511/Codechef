### Link: https://www.codechef.com/JAN21C/problems/FAIRELCT


So to keep in mind there are two peoples, John Jackson and Jack Johnson and we are friend of John Jackson so we have to do minimum swapping of vote packages to make Jack Johnson win impossible.

Case 1: Get the two sums of all pack of votes for N and M and check them whether John Jackson is already wining or not, if yes print 0. No need to do any swapping he has enough votes.
Case 2: If sum of votes are equal or John jackon has less votes then we have to start working on swapping things. The basic way according to me is to sort both the pack of votes.
Sort in either order(ascending or descending) and then swap the lowest of John Jackson's vote with highest of Jack Jhonson's and keep checking the sum and don't forget counting the swaps.

- If after few swapping John Jackson votes becomes higher print number of swaps and if still not then print -1.



**Codes will be posted after the challenge gets over. All the best till then. Keep coding.**
