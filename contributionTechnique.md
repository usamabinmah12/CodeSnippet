CLASS 5 - CONTRIBUTION TECHNIQUE

1. SUM OF PAIR SUMS

   Sum = Σ(i=1 to n) Σ(j=1 to n) (a[i] + a[j])

   Formula:
   Sum = 2 * n * (a[1] + a[2] + ... + a[n])


2. SUM OF ALL SUBARRAY SUMS

   Contribution of a[i] = a[i] * i * (n - i + 1)

   Answer:
   Sum = Σ(i=1 to n) a[i] * i * (n - i + 1)

   Note:
   1-based indexing use korte hobe.


3. SUM OF ALL SUBSET SUMS

   Each element appears in 2^(n-1) subsets.

   Answer:
   Sum = 2^(n-1) * (a[1] + a[2] + ... + a[n])


4. PRODUCT OF PAIR PRODUCTS

   Answer:
   Product = Π(i=1 to n) a[i]^(2*n)


5. XOR OF ALL SUBARRAY XORs

   Contribution of a[i]:
   a[i] contributes if i * (n - i + 1) is ODD.

   Otherwise, a[i] does not contribute.

   Answer:
   XOR all a[i] where i * (n - i + 1) is odd.


6. SUM OF MAX - MIN OVER ALL SUBSETS

   First, sort the array.

   Answer:
   Sum = Σ(i=1 to n) Σ(j=i+1 to n)
         (a[j] - a[i]) * 2^(j-i-1)


7. SUM OF (SUBARRAY SUM * SUBARRAY LENGTH)

   F(n) = n * (n + 1) / 2

   S(l, r) = F(r) - F(l - 1)

   Contribution of a[i]:

   a[i] * (
       i * S(i, n)
       - S(1, i) * (n - i + 1)
       + i * (n - i + 1)
   )

   Answer:
   Sum all contributions of a[i].


8. SUM OF NUMBER OF VOWELS IN SUBSTRINGS

   Source does not provide a formula.
   Solve using contribution technique.


9. SUM OF NUMBER OF INVERSIONS IN PERMUTATIONS

   For permutation of size n:

   Answer = n * (n - 1) * n! / 4


10. SUM OF NUMBER OF INVERSIONS IN SUBARRAYS

    Source does not provide a formula.
    Solve yourself.


--------------------------------------------------
BITWISE CONTRIBUTION
--------------------------------------------------

11. BIT REPRESENTATION

    x = Σ(k=0 to 30) 2^k * bit[k]


12. SUM OF ALL ARRAY NUMBERS USING BIT LAW

    cnt[k][1] = number of elements having k-th bit set.

    Answer:
    Sum = Σ(k=0 to 30) cnt[k][1] * 2^k


13. SUM OF PAIR XORs

    cnt[k][0] = number of elements having k-th bit unset.
    cnt[k][1] = number of elements having k-th bit set.

    Answer:
    Sum = Σ(k=0 to 30)
          2 * cnt[k][0] * cnt[k][1] * 2^k

    Note:
    This formula considers ordered pairs (i, j).


14. SUM OF PAIR ANDs

    Answer:
    Sum = Σ(k=0 to 30) cnt[k][1]^2 * 2^k

    Note:
    This formula considers ordered pairs (i, j),
    including i = j.


15. SUM OF PAIR ORs

    Derived formula:

    Answer:
    Sum = Σ(k=0 to 30)
          (n^2 - cnt[k][0]^2) * 2^k

    Note:
    This formula considers ordered pairs (i, j).


16. SUM OF SUBSET XORs

    If cnt[k][1] > 0:

        Contribution of k-th bit = 2^(n-1) * 2^k

    Otherwise:

        Contribution = 0

    Answer:
    Sum = 2^(n-1) * OR(a[1], a[2], ..., a[n])


17. SUM OF SUBSET ANDs

    Source does not provide a formula.
    Solve yourself.


18. SUM OF SUBSET ORs

    Source does not provide a formula.
    Solve yourself.


19. NUMBER OF SUBARRAYS WITH XOR = 0

    Let prefix XOR be:

    prefix[0] = 0
    prefix[i] = a[1] ^ a[2] ^ ... ^ a[i]

    A subarray has XOR = 0 if:

    prefix[i] = prefix[j]

    Answer:
    Sum over all prefix XOR values x:

    freq[x] * (freq[x] - 1) / 2

    Use a map to count prefix XOR frequencies.


--------------------------------------------------
EXPECTED VALUE
--------------------------------------------------

20. EXPECTED VALUE

    E = Sum of all possible outcomes / Number of outcomes


21. EXPECTED VALUE OF A FAIR DICE

    E = (1 + 2 + 3 + 4 + 5 + 6) / 6

    E = 3.5


22. EXPECTED NUMBER OF HEADS IN 2 FAIR COIN TOSSES

    Outcomes:
    HH, HT, TH, TT

    E = (2 + 1 + 1 + 0) / 4

    E = 1


23. EXPECTED VALUE OF A RANDOM ARRAY ELEMENT

    E = (a[1] + a[2] + ... + a[n]) / n


24. EXPECTED VALUE OF A RANDOM SUBARRAY SUM

    E = Sum of all subarray sums / Number of subarrays

    Number of subarrays = n * (n + 1) / 2

    E = (Sum of all subarray sums) / (n * (n + 1) / 2)


--------------------------------------------------
INTERACTIVE PROBLEMS
--------------------------------------------------

25. GUESS THE NUMBER

    Hidden number is between 1 and 10^6.

    Linear Search:
    Maximum queries = 10^6

    Binary Search:
    Maximum queries ≈ log2(10^6)
    Maximum queries ≈ 20

    Use binary search to find the hidden number.


26. BEAR AND PRIME 100

    Source provides the problem.
    Solve yourself.