/*
    1.
    Proof: by induction on n
    Let P(n) be the proposition that: 1 + 3 + 9 + 27 + ... + 3^n = (3^{n+1} - 1) / 2 for n >= 0

    Base: n = 0
    1 = (3^1 - 1) / 2
    1 = 1
    Therefore P(0) holds

    Inductive step: Assume P(k) is true for k >= 0, that is:
    1 + 3 + 9 + 27 + ... + 3^k = (3^{k+1} - 1) / 2
    Now show that P(k+1) is true, that is:
    1 + 3 + 9 + 27 + ... + 3^{k+1} = (3^{(k+1)+1} - 1) / 2

    1 + 3 + 9 + 27 + ... + 3^{k+1} = 1 + 3 + 9 + 27 + ... + 3^k + 3^{k+1}
    1 + 3 + 9 + 27 + ... + 3^k + 3^{k+1} = (3^{k+1} - 1) / 2 + 3^{k+1}

    (3^{k+1} - 1) / 2 + 3^{k+1} = (3^{(k+1)+1} - 1) / 2
    3^{k+1} - 1 + 2*3^{k+1} = 3^{k+2} - 1
    3*3^k+ 6*3^k = 9*3^k
    9*3^k = 9*3^k
    Therefore P(k+1) holds

    Therefore P(k) -> P(k+1)

    2.
    a:
    Syntax: 7c4 is 7 choose 4

    Hal but not Ida:
    {Ann, Ben, Cal, Dot, Ed, Fran, Gail}
    Hal _ _ _ _
    4 vacant slots in the photo with Hal but not Ida
    7c4 possibilities for Hal's photo companions
    5! different ways that the 5 peoples' placement in the row can be permuted for each combination
    7c4*5! possible different combinations of Hal + 4 others (not including Ida)

    Ida but not Hal:
    {Ann, Ben, Cal, Dot, Ed, Fran, Gail}
    Ida _ _ _ _
    4 vacant slots in the photo with Ida but not Hal
    7c4 possibilities for Ida's photo companions
    5! different ways that the 5 peoples' placement in the row can be permuted for each combination
    7c4*5! possible different combinations of Ida + 4 others (not including Hal)

    Total ways the photo can be taken with 5 people in a row if Hal or Ida (but not both) are in the picture:
    (Hal but not Ida) + (Ida but not Hal)
    7c4*5! + 7c4*5!

    b:
    S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    S' = {1, 2, 5, 6, 7, 8, 9, 10}
    3 4 _ _ _
    3 vacant slots to be filled by elements from S', |S'| = 8
    8c3 different subsets

    3.
    a:
    For the first student picked at random:
    10 freshmen, 12 sophomores, 8 juniors; 30 total students
    the odds of picking a freshman are 10/30 = 1/3

    For the second student picked at random:
    9 freshmen, 12 sophomores, 8 juniors; 29 total students
    the odds of picking a freshman are 9/29

    b:
    Syntax: 8c1 is 8 choose 1, etc.

    0 0s & 8 1s -> 1 possibility
    1 0  & 7 1s -> 8c1 possibilities
    2 0s & 6 1s -> 8c2 possibilities
    3 0s & 5 1s -> 8c3 possibilities
    4 0s & 5 1s -> 8c4 possibilities

    total number of 8-bit strings: 2^8

    probability that when selecting from all 8-bit strings, we get one with more 0s than 1s:
    (2^8 - (1 + 8c1 + 8c2 + 8c3 + 8c4)) / 2^8

    4.
    func1:
    the first, nested for loop:
    the outer loop runs log_5(n)+1 times
    the inner loop runs n times
    the nested for loop runs n*(log_5(n)+1) times
    Theta(n*(log_5(n)+1)) = Theta(n*log_5(n))

    if(n%5 == 0):
    the outer loop runs n times
    the inner loop runs n times
    the nested for loop runs n*n times, or n^2 times
    Theta(n^2)

    T_function1(n) = Theta(n*log_5(n) + n^2) = Theta(n^2)

    func2:
    The nested for loop has a runtime that looks like:
    1 + 2 + 3 + ... + (log_5(n)+1)
    evaluating the above expression gives us x(x+1)/2 where x=log_5(n)+1
    Theta(x(x+1)/2) = Theta(x^2) -> Theta(log_5^2(n))

    T_function2(n) = Theta(log_5^2(n))
*/
