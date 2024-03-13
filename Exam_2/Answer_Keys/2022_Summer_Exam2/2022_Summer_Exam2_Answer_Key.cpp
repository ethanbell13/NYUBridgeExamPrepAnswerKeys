/*
    1.
    Proof: by Induction on n
    Let P(n) be the proposition that for all integers n >= 0, 1 + 3 + 9 + 27 + ... + 3^n = (3^{n+1}-1)/2

    Base: n = 0
    1 = (3^1 - 1)/2
    1 = 2/2
    1 = 1
    Therefore P(0) holds

    Inductive step: Assume P(k) is true for an arbitrary positive integer k, that is
                    1 + 3 + 9 + 27 + ... + 3^k = (3^{k+1}-1)/2
    Now show that P(k+1) is true, that is
                    1 + 3 + 9 + 27 + ... + 3^{k+1} = (3^{(k+1)+1}-1)/2

                    1 + 3 + 9 + 27 + ... + 3^{k+1} = 1 + 3 + 9 + 27 + ... + 3^k + 3^{k+1}
                                                   = (3^{k+1}-1)/2 + 3^{k+1}
                           (3^{k+1}-1)/2 + 3^{k+1} = (3^{(k+1)+1}-1)/2
                                                   = (3^{k+2}-1)/2
                           3^{k+1} - 1 + 2*3^{k+1} = 3^{k+2} - 1
                               3^{k+1} + 2*3^{k+1} = 3^{k+2}
                                     3*3^k + 6*3^k = 9*3^k
                                             9*3^k = 9*3^k
    Therefore P(k+1) holds

    Therefore P(k) -> P(k+1)

    2.
    a:
    Syntax: 20c3 is 20 choose 3, etc.
    
    20 sophomores, 15 freshman, 5 committee seats

    If 3 of the 5 committee seats needed to be held by sophomores, there would be 20c3 possibilities.
    If 2 of the 5 committee seats needed to be held by freshmen, there would be 15c2 possibilities.
    
    The number of possibilities where the committee is manned by 3 sophomores and 2 freshman is:
    (20c3)*(15c2)

    b:
    Consider all 12-bit strings. There are only 2 possibilities a bit can assume, either 0 or 1.
    For a string of 12 bits, that means there are a total of 2^12 possible outcomes.

    Now consider all 12-bit strings that start with 11 and end with 10. That would look something like:
    1 1 _ _ _ _ _ _ _ _ 1 0
    That means we have 8 vacant positions to fill in the rest of our 12-bit string. In other words:
    
    There are 2^8 possible 12-bit strings that begin with 11 and end with 10

    3.
    a:
    1, 2, 2, 3, 4, 5, 5, 5
    of the above selection, 5 of the 8 values are >= 3
    therefore the probability that you randomly pick a ball where the value is greater than or equal to 3 is: 5/8

    b:
    The total outcomes of rolling 2 dice where the first die is odd is as follows:
    (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6)
    (2, 1), ..., (2, 6)
    (3, 1), ..., (3, 6)
    which is 18 total possibilities

    The total outcomes of rolling 2 dice where the first die is odd and the sum of the dice is 6 is as follows:
    (1, 5), (3, 3), (5, 1)
    
    There are 3 total outcomes of the possible 18. In other words:

    x is the condition where the first die is odd and the sum of both die is equal to 6:
    p(x) = 3/18 = 1/6

    4.
    func1:
    for the lone, nested for loop:
    the outer loop runs log_3(n)+1 times
    the inner loop runs n times
    
    the nested for loop runs n*(log_3(n)+1) times
    Theta(n*log_3(n)+1) = Theta(n*log_3(n))

    if (n % 2 == 0)
    the outer for loop runs log_2(n)+1 times
    the inner for loop runs n times
    
    the nested for loop runs n*(log_2(n)+1) times
    Theta(n*log_2(n)+1) = Theta(n*log_2(n))

    T_function1(n) = Theta(n*log_3(n) + n*log_2(n)) = Theta(n*log_2(n))

    func2:
    the outer for loop runs n times
    the inner for loop runtime looks like this:
    1 + 2 + 3 + ... + (log_3(n) + 1)
    the above expression is equal to x(x+1)/2 where x=log_3(n)+1
    Theta(x(x+1)/2) = Theta(x^2) -> Theta(log^2_3(n))

    The nested for loop runs n*Theta(log^2_3(n)) times
    T_function2(n) = Theta(n*log^2_3(n))
*/
