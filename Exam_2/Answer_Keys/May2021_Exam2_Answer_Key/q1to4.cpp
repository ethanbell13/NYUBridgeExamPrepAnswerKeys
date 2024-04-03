/*
    1. Theorem: For any positive integer n,
    6 evenly divides 7^n-1.
    Proof: By induction on n.
    Base Case: n = 1,
    7^1-1 = 6 which is divisible by 6. The theorem
    holds for n = 1.
    Inductive Step: Assume that for positive integer k such that
    k >= 1, that 7^k-1 is divisible by 6. This implies that 7^(k+1)-1
    is also divisible by 6.

    Since 7^k - 1 is divisible by 6, 7^k - 1 = 6m for some positive
    integer m.
    7^(k+1) - 1 = 7*7^k - 1
    7 * 7^k - 1 = 6 * 7^k + 7^k - 1
    using the inductive hypothesis,
    6 * 7^k + (7^k - 1) = 6 * 7^k + 6m
    6 * 7^k + 6m = 6(7^k + m)
    Since k and m are positive integers, 7^k + m is also
    a positive integer. Let z be a positive integer such that
    7^k + m = z
    6(7^k + m) = 6z which is divisible by 6.
    Therefore, 7^(k+1) - 1 is divisible by 6.

    2. a =|Exactly one digit appears two times| = (10 choose 1)(4 choose 2)*9*8
    b = |Exactly one digit appears three times| = (10 choose 1)(4 choose 3)*9
    c = |Exactly one digit appears 4 times| = (10 choose 1)*(4 choose 4)
    Answer = a + b + c = 10((4 choose 2) * 9 * 8 + 4 * 9 + 1) = 4,690

    3.
        A: Range of X = {1, 2, 3, 4, 5, 6}
        P(1) = 1/36
        P(2) = 3/36
        P(3) = 5/36
        P(4) = 7/36
        P(5) = 9/36
        P(6) = 11/36

        B: E[X] = 1/36 + 2* 3/36 + 3 * 5/36 + 4 * 7/36 + 5 * 9/36 + 6 * 11/36
             = (1 + 6 + 15 + 28 + 45 + 66)/36 = 161/36

    4. func1: t(n) = theta(1) + (n + n + n + ... + n) + n^2
    bigSigma_(i = 1)^n n = n^2
    count = n^2
    t(n) = theta(1) + theta(n^2) + theta(n^2)
    func1 = theta(n^2)

    func2: t(n) = theta(1) + (n + n + n + ... + n) + sum
    per func1 (n + n + ... + n) with n terms = n^2
    sum = (n + 2n + 3n + ... + n^2) = n(1 + 2 + 3 + ... + n)
    = n*bigSigma_(i=1)^n i = (n^2+n)/2 * n = (n^3+n^2)/2 = theta(n^3)
    t(n) = theta(n^2) + theta(n^3)
    t(n) = theta(n^3)
    func2 = theta(n^3)




*/