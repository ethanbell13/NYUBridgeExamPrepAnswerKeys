/*
    1. Proof: By induction on n.
    Base Case: When n = 2, 3^n = 3^2 = 9
    and 2^n+n^2 = 2^2+2^2= 8
    9 > 8
    Inductive Step: If for positive integer k such that k >= 2,
    3^k >= 2^k + k^2, then 3^(k+1) >= 2^(k+1) + (k+1)^2

    Starting with the left side of the equation to be proven.
    3^(k+1) = 3*3^k
    using the inductive hypothesis
    3*3^k >= 3(2^k + k^2)
    Using the right side of the equation to be proven
    2^(k+1) + (k+1)^2 = 2*2^k + k^2+2k+1
    Since k is greater than or equal  to 2,
    3*2^k >= 2*2^k
    and
    3*k^2 >= k^2+2k+1
    3(2^k+k^2) >= 2*2^k + k^2 + 2k + 1
    3*3^k >= 3(2^k+k^2)
    therefore, 3^(k+1) >= 2^(k+1) + (k+1)^2

    2. First we must find how many permuations there are for 3 even digits, which is P(4,3)
    We then find the perumations for the  remaining 6 digits.
    Answer = P(4,3)*6! = 4 * 3 * 2 * 6!

    3.
        A: Range of X = {0, 1, 2, 3, 4, 5}
    P(0) = (5 choose 0)/|s| = 1/2^5
    P(1) = (5 choose 1)/|s| = 5/2^5
    P(2) = (5 choose 2)/|s| = 10/2^5
    P(3) = (5 choose 3)/|s| = 10/2^5
    P(4) = (5 choose 4)/|s| = 5/2^5
    p(5) = (5 choose 5)/|s| = 1/2^5

        B: E[X] = 0 * 1/2^5 + 1 * 5/2^5 + 2 * 10/2^5 + 3 * 10/2^5 + 4 * 5/2^5 + 5 * 1/2^5
                = (5 + 20 + 30 + 20 + 5)/2^5
                = 80/2^5 = 2^4*5/2^5 = 5/2
            E[x] = 5/2

    4.
        function1: t(n) = theta(1) + (n + n + n + ... + n) + ...
        S(n + n + n + ... + n) = bigSigma_(i = 1)^(log_5(n)) n
        n* bigSigma_(i = 0)^(log_5(n)) n = n * log_5(n) = theta(nlog(n))
        t(n) = theta(1) + theta(nlog(n)) + ... + theta(1)
        if(n % 5)
            ... = (n + n + ... + n)
            = n* bigSigma(i=1)^n 1 = n^2
            t(n) = theta(n^2)
        else
            t(n) = theta(nlog(n))
        Due to the runtime changing everytime that n is divisible by 5
        func1 != bigOmega(n^2)
        therefore, func1 != theta(n^2)
        func1 = O(n^2)


        func2: t(n) = theta(1) + (n - 1) + (1 + 2 + 4 + 8 + ... + 2^(n-1))
        t(n) = theta(1) + theta(n) + theta(1 + 2 + 4 + ... + 2^n)
        bigSigma_(i=0)^n 2^i = (1(2^n - 1))/(2 - 1) = (2^n - 1)/ 1 = theta(2^n)
        t(n) = theta(1) + theta(n) + theta(2^n)
        func2 = theta(2^n)
*/