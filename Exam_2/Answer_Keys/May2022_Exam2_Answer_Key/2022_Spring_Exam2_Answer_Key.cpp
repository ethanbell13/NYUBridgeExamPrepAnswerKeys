/*
    1.
    Proof: by Induction on n
    Let P(n) be the proposition that 4^{n+1} + 5^{2n-1} is divisible by 21

    Base: n = 1
    4^{1+1} + 5^{2(1)-1} = 4^2 + 5 = 21
    21 is divisible by 21
    P(1) holds

    Inductive step: Assume P(k) is true for an arbitrary positive integer k, that is:
                            4^{k+1} + 5^{2k-1} is divisible by 21
    Now show P(k+1) is true, that is:
                            4^{(k+1)+1} + 5^{2(k+1)-1} is divisible by 21

                            4^{(k+1)+1} + 5^{2(k+1)-1} = 4^{k+2} + 5^{2k + 1}
                                                       = 4*4^{k+1} + 5*5^{2k}
                                                       = 4*4^{k+1} + (25/5)*5^{2k}
                                                       = 4*4^{k+1} + 25*5^{2k-1}
                                                       = 4*4^{k+1} + (21 + 4)*5^{2k-1}
                                                       = 4*4^{k+1} + 4*5^{2k-1} + 21*5^{2k-1}
                                                       = 4(4^{k+1} + 5^{2k-1}) + 21*5^{2k-1}
    The first term is 4*P(k) which is divisible by 21 per the inductive hypothesis.
    The second term is divisible by 21
    Therefore P(k+1) is divisible by 21

    Therefore P(k) -> P(k+1)

    2.
    Syntax: 20c5 is 20 choose 5, etc.

    9 women, 11 men, 20 total faculty
    5 members on the committee

    a:
    Possibilities for committee members:
    20c5
    Possibilities where there are 0 women on the committee:
    11c5

    Possibilities where theres at least one woman on the committee:
    20c5 - 11c5

    b:
    Possibilities where there are 0 women on the committee: 11c5
    Possibilities where there are 0 men on the comitteee: 9c5
    Possibilities where theres at least one woman and at least one man on the committee:
    20c5 - (11c5 + 9c5)

    3.
    Odds we roll a 4: 1/6
    Odds we don't roll a 4: 5/6

    a:
    if we roll n times, that means (n-1) times didn't end the game, or that (n-1) times we didn't roll 4's.
    Then finally, the game ended, which is to say we rolled a 4

    p = (5/6)^{n-1} * (1/6)

    b:
    If there's a 1/6 chance to roll a 4, we expect to roll a 4 within 6 dice rolls. In other words:
    X is a random variable indicating dice rolls until a 4 is rolled
    E[X] = 6

    4.
    function1:
    If (n % 3 == 0):
    the outer for loop runs log_3(n)+1 times
    the inner for loop runs n times
    the nested for loop runs n(log_3(n)+1) times
    Theta(n(log_3(n)+1)) = Theta(n*log_3(n) + n) = Theta(n*log_3(n))

    If (n % 2 == 0):
    the outer for loop runs n times
    the inner for loop runs n times
    the nested for loop runs n*n times, or n^2 times
    Theta(n^2)

    Else:
    Theta(1)

    T_function1 = Theta(n*log_3(n) + n^2 + 1) = Theta(n^2)

    function2:
    Syntax: log_2(n) = lg(n)

    The total runtime of the nested for loop looks like this:
    1 + 2 + 3 + 4 + ... + (lg(n)+1)
    The above expression is equal to x(x+1)/2 where x=lg(n)+1
    x(x+1)/2 = (x^2 + x)/2
    Theta((x^2 + x)/2) = Theta(x^2)
    Subbing in lg(n)+1 for x gives us (with some simplification) Theta(lg^2(n))

    T_function2 = Theta(lg^2(n))
*/
