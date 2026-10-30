============================================================
                 CP MATH FORMULA CHEAT SHEET
============================================================

NOTATION
--------

n       = number of terms
a       = first term
d       = common difference
r       = common ratio
l       = last term
S       = sum
n!      = factorial of n
C(n,r)  = nCr = combination
P(n,r)  = nPr = permutation
floor(x)= greatest integer <= x
ceil(x) = smallest integer >= x


============================================================
1. BASIC SUMMATIONS
============================================================

SUM OF 1 TO N
-------------

1 + 2 + 3 + ... + n

S = n * (n + 1) / 2


SUM OF FIRST N EVEN NUMBERS
---------------------------

2 + 4 + 6 + ... + 2n

S = n * (n + 1)


SUM OF FIRST N ODD NUMBERS
--------------------------

1 + 3 + 5 + ... + (2n - 1)

S = n^2


SUM OF SQUARES
--------------

1^2 + 2^2 + 3^2 + ... + n^2

S = n * (n + 1) * (2n + 1) / 6


SUM OF CUBES
------------

1^3 + 2^3 + 3^3 + ... + n^3

S = [n * (n + 1) / 2]^2


SUM OF FOURTH POWERS
--------------------

1^4 + 2^4 + ... + n^4

S = n * (n + 1) * (2n + 1) *
    (3n^2 + 3n - 1) / 30


SUM OF FIRST N MULTIPLES OF K
-----------------------------

k + 2k + 3k + ... + nk

S = k * n * (n + 1) / 2


SUM OF NUMBERS FROM L TO R
--------------------------

L + (L + 1) + ... + R

S = (L + R) * (R - L + 1) / 2


SUM OF EVEN NUMBERS FROM 1 TO N
-------------------------------

Number of even numbers = floor(n / 2)

S = m * (m + 1)

where m = floor(n / 2)


SUM OF ODD NUMBERS FROM 1 TO N
-----------------------------

Number of odd numbers = ceil(n / 2)

S = ceil(n / 2)^2


SUM OF EVEN NUMBERS FROM L TO R
-------------------------------

Let:
a = first even number >= L
b = last even number <= R

If a > b:
    S = 0
Else:
    m = (b - a) / 2 + 1
    S = m * (a + b) / 2


SUM OF ODD NUMBERS FROM L TO R
------------------------------

Let:
a = first odd number >= L
b = last odd number <= R

If a > b:
    S = 0
Else:
    m = (b - a) / 2 + 1
    S = m * (a + b) / 2


============================================================
2. ARITHMETIC PROGRESSION (AP)
============================================================

AP:
a, a + d, a + 2d, ..., a + (n - 1)d

COMMON DIFFERENCE
-----------------

d = a[i] - a[i - 1]


N-TH TERM
---------

a[n] = a + (n - 1) * d


SUM OF N TERMS
--------------

S = n * [2a + (n - 1) * d] / 2

OR

S = n * (a + last) / 2


LAST TERM
---------

last = a + (n - 1) * d


NUMBER OF TERMS
---------------

n = (last - a) / d + 1

(When d != 0 and the sequence is valid)


============================================================
3. GEOMETRIC PROGRESSION (GP)
============================================================

GP:
a, a*r, a*r^2, ..., a*r^(n - 1)

N-TH TERM
---------

a[n] = a * r^(n - 1)


SUM OF N TERMS (r != 1)
-----------------------

S = a * (r^n - 1) / (r - 1)

OR

S = a * (1 - r^n) / (1 - r)


WHEN r = 1
----------

S = n * a


INFINITE GP (|r| < 1)
---------------------

S = a / (1 - r)


GEOMETRIC SUM: POWERS OF 2
--------------------------

1 + 2 + 4 + 8 + ... + 2^n

S = 2^(n + 1) - 1


GEOMETRIC SUM: POWERS OF K
--------------------------

1 + k + k^2 + ... + k^n

S = (k^(n + 1) - 1) / (k - 1)

(k != 1)


============================================================
4. FACTORIAL AND PERMUTATION
============================================================

FACTORIAL
---------

n! = n * (n - 1) * (n - 2) * ... * 1

0! = 1

n! = n * (n - 1)!


PERMUTATION
-----------

Number of ways to arrange r objects from n objects:

P(n, r) = n! / (n - r)!


PERMUTATION OF ALL N OBJECTS
----------------------------

P(n, n) = n!


PERMUTATION WITH REPETITION
---------------------------

If total n objects contain:
a identical objects of type 1
b identical objects of type 2
c identical objects of type 3

Ways = n! / (a! * b! * c!)

where a + b + c = n


CIRCULAR PERMUTATION
--------------------

Ways to arrange n distinct objects in a circle:

(n - 1)!


============================================================
5. COMBINATION
============================================================

COMBINATION
-----------

C(n, r) = n! / [r! * (n - r)!]


SYMMETRY
--------

C(n, r) = C(n, n - r)


BOUNDARY CASES
--------------

C(n, 0) = 1

C(n, n) = 1

C(n, 1) = n


PASCAL IDENTITY
---------------

C(n, r) = C(n - 1, r) + C(n - 1, r - 1)


SUM OF ALL COMBINATIONS
-----------------------

C(n, 0) + C(n, 1) + ... + C(n, n)

= 2^n


SUM OF EVEN-INDEXED BINOMIAL COEFFICIENTS
-----------------------------------------

C(n, 0) + C(n, 2) + C(n, 4) + ...

= 2^(n - 1)       (n >= 1)


SUM OF ODD-INDEXED BINOMIAL COEFFICIENTS
----------------------------------------

C(n, 1) + C(n, 3) + C(n, 5) + ...

= 2^(n - 1)       (n >= 1)


COMBINATIONS WITH REPETITION
----------------------------

Choose r items from n types, repetition allowed:

C(n + r - 1, r)


============================================================
6. BINOMIAL THEOREM
============================================================

(a + b)^n

= SUM(k = 0 to n) C(n, k) * a^(n - k) * b^k


SPECIAL CASE
------------

(1 + x)^n

= C(n,0) + C(n,1)x + C(n,2)x^2 + ... + C(n,n)x^n


============================================================
7. SUBARRAY AND SUBSEQUENCE COUNT
============================================================

NUMBER OF NON-EMPTY SUBARRAYS
-----------------------------

n * (n + 1) / 2


NUMBER OF SUBARRAYS INCLUDING EMPTY SUBARRAY
--------------------------------------------

n * (n + 1) / 2 + 1


NUMBER OF SUBARRAYS OF LENGTH K
-------------------------------

n - k + 1

(If 1 <= k <= n)


NUMBER OF SUBARRAYS OF LENGTH AT MOST K
---------------------------------------

Sum(length = 1 to K) (n - length + 1)

= K * (n + 1) - K * (K + 1) / 2

(For 1 <= K <= n)


NUMBER OF SUBSEQUENCES
----------------------

2^n


NUMBER OF NON-EMPTY SUBSEQUENCES
--------------------------------

2^n - 1


NUMBER OF SUBSETS
-----------------

2^n


NUMBER OF NON-EMPTY SUBSETS
---------------------------

2^n - 1


NUMBER OF PAIRS
---------------

C(n, 2) = n * (n - 1) / 2


NUMBER OF ORDERED PAIRS
-----------------------

n * n = n^2


NUMBER OF TRIPLETS
------------------

C(n, 3) = n * (n - 1) * (n - 2) / 6


NUMBER OF WAYS TO SPLIT N ITEMS INTO TWO GROUPS
-----------------------------------------------

2^n


============================================================
8. CONTRIBUTION TECHNIQUE
============================================================

SUM OF ALL SUBARRAY SUMS
------------------------

Contribution of a[i]:

a[i] * i * (n - i + 1)

Answer:

Sum(i = 1 to n) a[i] * i * (n - i + 1)


NUMBER OF SUBARRAYS CONTAINING INDEX I
--------------------------------------

i * (n - i + 1)

(1-based indexing)


NUMBER OF SUBARRAYS CONTAINING INDEX I
--------------------------------------

(i + 1) * (n - i)

(0-based indexing)


SUM OF ALL SUBARRAY LENGTHS
---------------------------

n * (n + 1) * (n + 2) / 6


SUM OF ALL SUBARRAY LENGTHS SQUARED
----------------------------------

n * (n + 1)^2 * (n + 2) / 12


SUM OF ALL SUBARRAY SUMS
------------------------

If a[i] is the element at 1-based index i:

Answer = Sum(i = 1 to n)
         a[i] * i * (n - i + 1)


SUM OF ALL SUBARRAY XORs
------------------------

a[i] contributes if:

i * (n - i + 1) is ODD

XOR all such a[i].


SUM OF ALL SUBSET SUMS
----------------------

Each a[i] appears in 2^(n - 1) subsets.

Answer = 2^(n - 1) * Sum(a[i])


SUM OF ALL SUBSET XORs
----------------------

Answer = 2^(n - 1) * OR(a[1], a[2], ..., a[n])

(n >= 1)


SUM OF MAX - MIN OVER ALL SUBSETS
---------------------------------

Sort the array.

Answer = Sum(i = 1 to n)
         Sum(j = i + 1 to n)
         (a[j] - a[i]) * 2^(j - i - 1)


============================================================
9. PREFIX SUM
============================================================

PREFIX SUM
----------

prefix[0] = 0

prefix[i] = prefix[i - 1] + a[i]


SUM OF RANGE [L, R]
-------------------

sum(L, R) = prefix[R] - prefix[L - 1]


2D PREFIX SUM
-------------

prefix[i][j] =
    a[i][j]
    + prefix[i - 1][j]
    + prefix[i][j - 1]
    - prefix[i - 1][j - 1]


2D RANGE SUM [x1, y1] TO [x2, y2]
---------------------------------

sum =
    prefix[x2][y2]
    - prefix[x1 - 1][y2]
    - prefix[x2][y1 - 1]
    + prefix[x1 - 1][y1 - 1]


============================================================
10. DIFFERENCE ARRAY
============================================================

RANGE UPDATE [L, R] BY X
------------------------

diff[L] += X

diff[R + 1] -= X


REBUILD ARRAY
-------------

a[i] = a[i - 1] + diff[i]


============================================================
11. MODULAR ARITHMETIC
============================================================

MODULO
------

(a + b) % m
= ((a % m) + (b % m)) % m


(a - b) % m
= ((a % m) - (b % m) + m) % m


(a * b) % m
= ((a % m) * (b % m)) % m


POWER MODULO
------------

(a^b) % m

Use Binary Exponentiation.


MODULAR INVERSE
---------------

If m is prime and a % m != 0:

inverse(a) = a^(m - 2) % m


DIVISION MODULO M
-----------------

a / b modulo m

= a * inverse(b) % m

(Only when inverse(b) exists)


FERMAT'S LITTLE THEOREM
-----------------------

If p is prime and p does not divide a:

a^(p - 1) % p = 1


EULER'S THEOREM
---------------

If gcd(a, m) = 1:

a^phi(m) % m = 1


============================================================
12. GCD AND LCM
============================================================

GCD
---

gcd(a, b) = gcd(b, a % b)

gcd(a, 0) = a


LCM
---

lcm(a, b) = (a / gcd(a, b)) * b


GCD OF MULTIPLE NUMBERS
-----------------------

gcd(a, b, c) = gcd(gcd(a, b), c)


============================================================
13. DIVISORS AND PRIME NUMBERS
============================================================

NUMBER OF DIVISORS
------------------

If:

n = p1^a1 * p2^a2 * ... * pk^ak

Then:

Number of divisors =
(a1 + 1) * (a2 + 1) * ... * (ak + 1)


SUM OF DIVISORS
---------------

If:

n = p1^a1 * p2^a2 * ... * pk^ak

Then:

Sum of divisors =
[(p1^(a1 + 1) - 1) / (p1 - 1)]
*
[(p2^(a2 + 1) - 1) / (p2 - 1)]
*
...


NUMBER OF PRIME FACTORS WITH MULTIPLICITY
-----------------------------------------

Omega(n) = a1 + a2 + ... + ak


NUMBER OF DISTINCT PRIME FACTORS
--------------------------------

omega(n) = k


PRIME CHECK
-----------

If n < 2:
    Not prime

Check divisors from 2 to sqrt(n).

If any divisor exists:
    Not prime

Otherwise:
    Prime


SIEVE OF ERATOSTHENES
---------------------

Time Complexity:

O(n log log n)


============================================================
14. EULER TOTIENT FUNCTION
============================================================

PHI(N)
-------

phi(n) = number of integers from 1 to n
         that are coprime with n


FORMULA
-------

If:

n = p1^a1 * p2^a2 * ... * pk^ak

Then:

phi(n) =
n * (1 - 1/p1)
  * (1 - 1/p2)
  * ...
  * (1 - 1/pk)


SPECIAL CASE
------------

If p is prime:

phi(p) = p - 1


============================================================
15. BITWISE FORMULAS
============================================================

BIT REPRESENTATION
------------------

x = Sum(k = 0 to 30) bit[k] * 2^k


CHECK K-TH BIT
--------------

(x >> k) & 1


SET K-TH BIT
------------

x | (1 << k)


CLEAR K-TH BIT
--------------

x & ~(1 << k)


TOGGLE K-TH BIT
---------------

x ^ (1 << k)


REMOVE LOWEST SET BIT
---------------------

x & (x - 1)


ISOLATE LOWEST SET BIT
----------------------

x & (-x)


POWER OF TWO CHECK
------------------

x > 0 AND (x & (x - 1)) == 0


COUNT SET BITS
--------------

__builtin_popcount(x)       // int
__builtin_popcountll(x)     // long long


XOR PROPERTIES
--------------

a ^ a = 0

a ^ 0 = a

a ^ b = b ^ a

(a ^ b) ^ c = a ^ (b ^ c)


XOR FROM 1 TO N
---------------

If n % 4 == 0:
    XOR = n

If n % 4 == 1:
    XOR = 1

If n % 4 == 2:
    XOR = n + 1

If n % 4 == 3:
    XOR = 0


XOR OF RANGE [L, R]
-------------------

XOR(L, R) = XOR(1, R) ^ XOR(1, L - 1)


SUM OF PAIR XORs
----------------

For each bit k:

cnt0 = number of elements with bit k = 0
cnt1 = number of elements with bit k = 1

Contribution =
2 * cnt0 * cnt1 * 2^k

(Ordered pairs)


SUM OF PAIR ANDs
----------------

Contribution of bit k:

cnt1 * cnt1 * 2^k

(Ordered pairs, including i = j)


SUM OF PAIR ORs
----------------

Contribution of bit k:

(n^2 - cnt0 * cnt0) * 2^k

(Ordered pairs)


============================================================
16. LOGARITHM AND EXPONENT
============================================================

LOG RULES
---------

log(a * b) = log(a) + log(b)

log(a / b) = log(a) - log(b)

log(a^b) = b * log(a)

log_b(x) = log(x) / log(b)


BINARY SEARCH ITERATIONS
------------------------

Maximum iterations ≈ log2(n)

For n = 10^6:

log2(10^6) ≈ 20


NUMBER OF DIGITS IN BASE 10
---------------------------

digits(n) = floor(log10(n)) + 1

For n > 0


NUMBER OF BITS
--------------

bits(n) = floor(log2(n)) + 1

For n > 0


============================================================
17. PROBABILITY AND EXPECTED VALUE
============================================================

PROBABILITY
-----------

P(E) = Favorable outcomes / Total outcomes


EXPECTED VALUE
--------------

E[X] = Sum(x * P(X = x))


UNIFORM RANDOM CHOICE
---------------------

If all n outcomes are equally likely:

E[X] = (x1 + x2 + ... + xn) / n


EXPECTED VALUE OF A FAIR DICE
-----------------------------

E = (1 + 2 + 3 + 4 + 5 + 6) / 6

E = 3.5


EXPECTED NUMBER OF HEADS IN N FAIR COIN TOSSES
-----------------------------------------------

E = n / 2


EXPECTED VALUE OF RANDOM ARRAY ELEMENT
--------------------------------------

E = (a[1] + a[2] + ... + a[n]) / n


EXPECTED VALUE OF RANDOM SUBARRAY SUM
------------------------------------

E = (Sum of all subarray sums)
    / (n * (n + 1) / 2)


============================================================
18. COMMON COMPLEXITY FORMULAS
============================================================

SINGLE LOOP
-----------

for i = 1 to n:

Time = O(n)


NESTED LOOPS
------------

for i = 1 to n:
    for j = 1 to n:

Time = O(n^2)


TRIANGULAR LOOP
---------------

for i = 1 to n:
    for j = 1 to i:

Number of iterations:

n * (n + 1) / 2

Time = O(n^2)


HALVING LOOP
------------

while n > 0:
    n = n / 2

Time = O(log n)


DOUBLING LOOP
-------------

i = 1

while i <= n:
    i = i * 2

Time = O(log n)


NESTED LOG LOOP
---------------

for i = 1; i <= n; i *= 2:
    for j = 1; j <= n; j *= 2:

Time = O(log^2 n)


============================================================
19. USEFUL INTEGER IDENTITIES
============================================================

n * (n + 1) is always EVEN.


n * (n - 1) is always EVEN.


n * (n + 1) * (n + 2) is divisible by 6.


n^3 - n = n * (n - 1) * (n + 1)

Always divisible by 6.


a^2 - b^2 = (a - b) * (a + b)


(a + b)^2 = a^2 + 2ab + b^2


(a - b)^2 = a^2 - 2ab + b^2


(a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3


a^3 + b^3 = (a + b) * (a^2 - ab + b^2)


a^3 - b^3 = (a - b) * (a^2 + ab + b^2)


============================================================
20. IMPORTANT CP NOTES
============================================================

1. Use long long for large sums and products.

2. n! grows very fast.
   20! fits in signed 64-bit.
   21! does not fit in signed 64-bit.

3. Always check integer overflow before multiplication.

4. For modular multiplication, use long long only if
   the product fits in long long.

5. For 1-based indexing:
   prefix[i] = sum of a[1] to a[i]

6. For 0-based indexing:
   prefix[i] = sum of a[0] to a[i]

7. Be careful with:
   n * (n + 1) / 2

   Prefer:
   1LL * n * (n + 1) / 2

8. For powers modulo m, use binary exponentiation.

9. For combinations modulo prime m:
   C(n, r) = fact[n] * invfact[r] * invfact[n-r] % m

10. Always verify whether a formula counts:
    - Ordered pairs
    - Unordered pairs
    - Empty subsets
    - Non-empty subsets
    - 0-based indices
    - 1-based indices

============================================================
                    END OF CHEAT SHEET
============================================================