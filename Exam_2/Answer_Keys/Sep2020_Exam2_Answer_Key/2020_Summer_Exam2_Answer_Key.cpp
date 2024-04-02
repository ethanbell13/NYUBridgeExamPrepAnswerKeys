/*
    1.
    Proof: by Induction on n
    Let P(n) be the proposition that a_n <= 2^{n-1}

    Base: n = 1, a_n = 1
    1 <= 2^{1 - 1}
    1 <= 2^0
    1 <= 1
    P(1) is true

    Inductive step: Assume P(k) is true for an arbitrary integer k where k > 1, that is:
                                    a_k <= 2^{k-1}
    Now show that P(k+1) is true, that is:
                                    a_{k+1} <= 2^{(k+1)-1}
                                    a_{k+1} <= 2^k

                                    a_{k+1} = a_k + a_{k-1} <= 2^{k-1} + 2^{k-2}
                                    a_{k+1} <= 2^{k-1} + 2^{k-2}
                                             = (1/2)2^k + (1/4)2^k
                                             = (3/4)2^k
                                    a_{k+1} <= (3/4)2^k < 2^k
                                    a_{k+1} <= 2^k
    Therefore P(k+1) is true

    Therefore P(k) -> P(k+1)

    2.
    3 1s and 3 2s (111222, etc.) -> 6c3 possibilities
    2 1s and 2 2s (112200, etc.) -> (6c2)(4c2) possibilities
    1 1s and 1 2s (120000, etc.) -> (6c1)(5c1) possibilities
    0 1s and 0 2s (000000, etc.) -> 1 possibility

    Total = 6c3 + (6c2)(4c2) + (6c1)(5c1) + 1

    3.
    36 possible combinations of numbers when rolling 2 6-sided dice

    If the sum of the 2 dice rolls equals 7 or 11, you win 10 bucks
    [(6, 1), (3, 4), (5, 2), (6, 5)] * 2 = 8 possibilities

    If the sum of the 2 dice rolls equals 12, you win 20 bucks
    (6, 6) = 1 possibility

    Otherwise you lose a buck
    36 - (8 + 1) = 27 possibilities
    
    Let X be a random variable that represents the player's winnings
    X = 10, 20, or -1

    Distribution: {(10, 8/36), (20, 1/36), (-1, 27/36)}

    E[X] = 10*8/36 + 20*1/36 - 1*27/36
         = 80/36 + 20/36 - 27/36
    E[X] = 73/36

    4.
    Syntax: log_2(x) = lg(x)
    Ignoring constant time operations
    
    func1:
    first for loop runs n-1 times -> Theta(n)
    second for loop:
        1 + 3 + 5 + ... + (2n - 1) = n^2 -> Theta(n^2)
    T_func1 = Theta(n + n^2) = Theta(n^2)

    func2:
    first for loop runs n-1 times -> Theta(n)
    second, nested for loop:
        1 + 2 + 4 + ... + 2^{n-1} = 2^{lg(2^{n-1}) + 1} - 1 = 2(2^{n - 1}) - 1
        Theta(2(2^{n - 1}) - 1) = Theta(2^n)
    T_func2 = Theta(n + 2^n) = Theta(2^n)
*/
