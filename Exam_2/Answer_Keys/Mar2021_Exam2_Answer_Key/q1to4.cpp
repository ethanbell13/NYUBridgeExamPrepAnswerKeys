/*
    1.
    Proof: By strong induction on n.
    Base Case 1: When n = 1, a_n = 1
    Base Case 2: When n = 2, a_n = 2
    Inductive Step: Let k represent an integer such that k >= 2.
    Let j represent a positive intger j such that j <= k.
    Assume that for all integers in the range [j, k], a_j >= (sqrt(2))^j.
    We will prove that a_(k+1) >= (sqrt(2))^(k+1).

    Starting with the left side of the equation to be proven.
    a_(k+1) = a_k + a_(k - 1)
    using the inductive hypothesis
    a_k + a_(k-1) >= (sqrt(2))^k + (sqrt(2))^(k-1)
    a_(k+1) >= (sqrt(2))^k + (sqrt(2))^(k-1)
    a_(k+1) >= (sqrt(2))^k + ((sqrt(2))^k)/sqrt(2)
    a_(k+1) >= ((sqrt(2))^(k+1)+(sqrt(2))^k))/sqrt(2)
    ((sqrt(2))^(k+1)+(sqrt(2))^k))/sqrt(2) >= (sqrt(2))^(k+1)
    Therefore, a_(k+1) >= (sqrt(2))^(k + 1)
    go back proof is incomplete

    2.
        a: There are 10 options for the first digit, 9 for the second,
        8 for the third, and 7 options for the fourth digit.
        So there are P(10, 4) = 10 * 9 * 8 * 7 options

        b: Since the digits must appear in increasing order and cannot repeat,
        every combination of 4 numbers can only be ordered in one way.
        Therefore the number of choices is equal to the number of ways
        that we can choose 4 members from a  10 member set.
        |choices| = (10 choose 4)

    3.
        a: Range of X = [1,4]
        P(both dices are even) = 1/2 * 1/2 = 1/4
        P(1) = 1/4
        P(2) = 1/4*(3/4)
        P(3) = 1/4*(3/4)^2
        P(4) = (3/4)^3

        B: E[X] = 1/4 + 2 * 3/16 + 3 * 9/64 + 4 * 27/64
        = 16/64 + 24/64 + 27/64 + (4*27)/64 = 175/64

    4.
        a: func = t(n) = theta(1) + (1 + 2 + 4 + ... + log(n))
        bigSigma_(i = 0)^log_2(log(n) 2^i  
		=  1(2^(log_2(logn))-1)/(2 - 1)
        = log(n) - 1 = theta(log(n))
        func = theta(1) + theta(log(n))
        func = theta(log(n))

        b: The array arr created within first10Squares is created as
        a local variable within that function. When it's returned,
        the array and it's values fall out of scope resulting in undefined behavior.

        The program can be fixed by replacing "int arr[10];"
        with "int* arr = new int[10];" and then adding the line
        delete[] arr right before the "return 0;" line in the main function.




*/