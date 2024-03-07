/*
    1.
    Question 1 of 2:
    Ignoring constant time complexity
    The first for loop runs n times
    The second, nested for loop runs a total of n(n+1)/2 times

    T(n) = Theta(n + n(n+1)/2) = Theta(n^2)

    Question 2 of 2:
    Ignoring constant time complexity
    The reverseArray function runs n/2 times
    func2 calls the reverseArray function log2(n) + 1 times

    T(n) = Theta((log2(n) + 1) * (n / 2)) = Theta(nlog2(n))

    2.
    Proof: by induction on n
    Let P(n) be the proposition that 3 evenly divides 2^{2n} - 1
    
    Base case: n = 1
                        2^{2*1} - 1 = 2^2 - 1 = 4 - 1 = 3
                        3 evenly divides 3
    Therefore P(1) holds
    
    Inductive step: Assume P(k) for an arbitrary positive integer k, that is:
                        3 evenly divides 2^{2k} - 1
    Now show that P(k+1) holds, that is:
                        3 evenly divides 2^{2(k+1)} - 1
                        2^{2(k+1)} = 2^{2k} * 2^2 - 1
                                   = 4*2^{2k} - 1
                                   = (3 + 1)2^{2k} - 1
                                   = (3*2^{2k}) + (2^{2k} - 1)
    The first parentheses grouping is divisible by 3
    The second parentheses grouping is P(k) which is divisible by 3
    Therefore P(k+1) is divisible by 3

    Therefore P(k) -> P(k+1)

    3.
    Question 1 of 2:
    2^3 possible Heads and Tails combinations when flipping the coin 3 times:
    HHH, HHT, HTH, HTT, TTT, THH, THT, TTH

    x=0^2, p(x) = 1/8
    x=1^2, p(x) = 3/8
    x=2^2, p(x) = 3/8
    x=3^2, p(x) = 1/8

    Distribution: {(0^2, 1/8), (1^2, 3/8), (2^2, 3/8), (3^2, 1/8)}

    E(x) = 0*(1/8) + 1^2*(3/8) + 2^2*(3/8) + 3^2(1/8)
         = 0 + 3/8 + 4*3/8 + 9*1/8
         = 3/8 + 12/8 + 9/8
         = 24/8
         = 3

    Question 2 of 2:
    The sum of the fair spinners are the averages of their expected outcomes
    Blue = (1 + 2 + 3 + 4 + 5)/5 = 3
    Red = (1 + 2 + 3)/3 = 2

    Both the red and blue spinners are independent of each other. If X is the sum of their expected values:
    E[x] = 3 + 2 = 5
*/
