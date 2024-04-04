/*
    1.
    Proof: by Induction on n
    Let P(n) be the proposition that for all positive integers n, (1+2^n) <= 3^n

    Base: n = 1
    (1 + 2^1) <= 3^1
    (1 + 2) <= 3
    3 <= 3
    P(1) holds

    Inductive step: Assume P(k) is true for an arbitrary, positive integer k. That is,
                                        (1+2^l) <= 3^k
    Now show that P(k+1) is true, that is
                                        (1+2^{k+1}) <= 3^{k+1}

    Using the inductive hypothesis:  (1 + 2^k) <= 3^k
                                  (1 + (2/2)*2^k) <= (3/3)3^k
                              (1 + (1/2)*2^{k+1}) <= (1/3)3^{k+1}
                              (3 + (3/2)*2^{k+1}) <= 3^{k+1}
              (1 + 2^{k+1}) < (3 + (3/2)*2^{k+1}) <= 3^{k+1}
                                    (1 + 2^{k+1}) <= 3^{k+1}
    Therefore P(k+1) is true

    Therefore P(k) -> P(k+1)

    2.
    a: |S| = 62^5
    |No digits| = 52^5
    |At least one digit| = 62^5 - 52^5
    It will take (62^5 - 52^5) units of time to
    check evey potential password.

    b:
    Syntax: 8c5 is 8 choose 5

    s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    we excommunicate the 3s and 4s to get:
    s' = {1, 2, 5, 6, 7, 8, 9, 10}, leaving us 8 options to choose from
    of the 8 options, we need to formulate a subset with a length of 5

    The number of subsets with length 5 is:
    8c5

    3.
    a:
    Syntax: 8c1 is 8 choose 1, etc.
    Total possible 8-bit strings: 2^8
    0  0, 8 1s -> 1 possibility
    1  0, 7 1s -> 8c1 possibilities
    2 0s, 6 1s -> 8c2 possibilities
    3 0s, 5 1s -> 8c3 possibilities
    4 0s, 4 1s -> 8c4 possibilities

    The amount of 8-bit strings where the number of 0s is greater than the number of 1s is:
    (total possible 8-bit strings) - (number of 8-bit strings where the number of 0s is less than or equal to the number of 1s)
    2^8 - (1 + 8c1 + 8c2 + 8c3 + 8c4)
    the probability that we will select an 8-bit string where the number of 0s is greater than the number of 1s from among the
    total number of 8-bit strings is:
    (2^8 - (1 + 8c1 + 8c2 + 8c3 + 8c4)) / 2^8

    Alternative Solution Technigque for part a:

    A: Let B^n represent the set of
    bit strings that contain n bits.
    |B^n| = 2^n
    |B^8| = 2^8
    An 8 bit string has either less 0 bits than 1 bits
    more 1 bits than 0 bits or 4 0 bits.
    For any 8 bit strings that has more 0 bits, an 8 bit
    string with more 1 bits can be created by swapping the
    0 bits with the 1 bits. Therefore,
    |More 0 bits| = |More 1 bits|
    |4 0 bits| = C(8, 4)
    = (8 * 7 * 6 5 * 4!)/(4! * 4!)
    = (8 * 7 * 6 * 5)/(4 * 3 * 2)
    = 7 * 2 * 5 = 70
    |B^8| = |more 0 bits| + |more 1 bits| + |4 0 bits|
    |B^8| - |4 0 bits| = 2 * |more 0 bits|
    (|B^8| - |4 0 bits|) / 2 = |more 0 bits|
    |more 0 bits| = (2^8 - 70)/ 2
    = 2(2^7 - 35)/2
    = 2^7 - 35
    P(|More 0 bits|) = (2^7 - 35)/2^8

    b:
    1, 1, 2, 2, 2, 3

    p(1) = 2/6 = 1/3
    p(2) = 3/6 = 1/2
    p(3) = 1/6

    let X1 represent the value of the first die
    let X2 represent the value of the second die
    E[X1] = E[X2]
    Linearity of Expectations: E[X1+X2] = E[X1] + E[X2]
    E[X1] = 1*(2/6) + 2*(3/6) + 3*(1/6) = 11/6
    E[X1+X2] = 2*(11/6) = 11/3

    4.
    Syntax: log_2(n) = lg(n)

    func1:
    first, nested for loop:
    outer loop runs lg(100)+1 (7) times
    the inner for loop runtime looks like this:
    1 + 2 + 3 + ... + (lg(n)+1)
    the above expression is equal to x(x+1)/2 where x=lg(n)+1
    Theta(x(x+1)/2) = Theta(x^2) -> Theta(lg^2(n))
    the nested for loop has an asymptotic analysis of Theta(7*lg^2(n)) = Theta(lg^2(n))

    the second for loop runs lg(n) + 1 times -> Theta(lg(n))

    T_function1(n) = Theta(lg^2(n) + lg(n)) = Theta(lg^2(n))

    func2:
    Let's say that n is equal to 8. The recursive tree is as follows:
                                                            n = 8
                                                       n = 4     n = 4
                                                     n=2  n=2   n=2  n=2
                                                n=1 n=1 n=1 n=1 n=1 n=1 n=1 n=1
    T_function2(n) = 1Theta(1) + 2Theta(1) + 4Theta(1) + ... + 8Theta(1)
    or in a more general sense:
    T_function2(n) = 1Theta(1) + 2Theta(1) + 4Theta(1) + ... + nTheta(1)
    the above expression is equal to 2^{lg(n)+1}-1 = 2n-1
    Theta(2n-1) = Theta(n), therefore:

    T_function2(n) = Theta(n)
*/
