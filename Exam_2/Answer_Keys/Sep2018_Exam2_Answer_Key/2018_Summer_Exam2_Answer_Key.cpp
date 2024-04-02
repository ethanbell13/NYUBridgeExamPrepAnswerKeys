/*
    1.
    Question 1 of 2:
    Ignoring constant time complexity
    The first for loop runs n times
    The second, nested for loop runs a total of n(n+1)/2 times

    T(n) = Theta(n + n(n+1)/2) = Theta(n^2)

    Question 2 of 2:
    Ignoring constant time complexity
    func2 calls the reverseArray function log2(n) + 1 times
    The total runtime of func2 calling reverseArray looks like this:
    1 + 1 + 2 + 4 + ... + (n/2) = n -> Theta(n)

    T(n) = Theta(n)

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
    The second parentheses grouping is P(k) which is divisible by 3 per the inductive hypothesis
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
    The expected value of the Blue spinner is as follows:
    1*(1/5) + 2*(1/5) + 3*(1/5) + 4*(1/5) + 5*(1/5)
    = 1/5 + 2/5 + 3/5 + 4/5 + 5/5
    = 15/5
    = 3

    The expected value of the Red spinner is as follows:
    1*(1/3) + 2*(1/3) + 3*(1/3)
    = 1/3 + 2/3 + 3/3
    = 6/3
    = 2

    Since both spinners are independent of each other, the expected value of the sum of the outcomes of the two spinners is equal to 
    the sum of each spinner's expected outcome:
    E[X] = 3 + 2 = 5
*/
