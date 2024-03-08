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

                                        (1 + 2^k) <= 3^k
                                  (1 + (2/2)*2^k) <= (3/3)3^k
                              (1 + (1/2)*2^{k+1}) <= (1/3)3^{k+1}
                              (3 + (3/2)*2^{k+1}) <= 3^{k+1}
              (1 + 2^{k+1}) < (3 + (3/2)*2^{k+1}) <= 3^{k+1}
                                    (1 + 2^{k+1}) <= 3^{k+1}
    Therefore P(k+1) is true

    Therefore P(k) -> P(k+1)

    2.
    a:
    5-character password
    26 lower-case letters
    26 upper-case letters
    10 digits

    a digit is required in the password while the remaining 4 spaces can be occupied by upper or lower-case letters or digits
    there are 10 options to choose from with the required digit in the password
    there are 62 options to choose from when selecting from a pool of upper and lower-case letters and digits

    the total possibilities for the described 5-character password are then:
    10 * 62 * 62 * 62 * 62 
    = 10 * 62^4

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

    b:
    1, 1, 2, 2, 2, 3
    
    p(1) = 2/6 = 1/3
    p(2) = 3/6 = 1/2
    p(3) = 1/6

    sum possibilities:
    {2, 3, 4, 5, 6}
    when the sum is 2, the dice roll is (1, 1)
    when the sum is 3, the dice roll is (1, 2) or (2, 1)
    when the sum is 4, the dice roll is (1, 3), (3, 1), (2, 2)
    when the sum is 5, the dice roll is (2, 3) or (3, 2)
    when the sum is 6, the dice roll is (3, 3)

    x is a random variable that represents the sum of the two given dice rolls
    x = 2, p(x) = p(1)*p(1) = (1/3)*(1/3) = 1/9
    x = 3, p(x) = p(1)*p(2) = (1/3)*(1/2) = 1/6
    x = 4, p(x) = p(1)*p(3) + p(2)*p(2) = (1/3)*(1/6) + (1/2)*(1/2) = 11/36
    x = 5, p(x) = p(2)*p(3) = (1/2)*(1/6) = 1/12
    x = 6, p(x) = p(3)*p(3) = (1/6)*(1/6) = 1/36

    E[x] = 2*1/9 + 3*1/6 + 4*11/36 + 5*1/12 + 6*1/36
         = 91/36
    
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
