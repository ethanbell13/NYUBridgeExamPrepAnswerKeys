/*
    1.
    (This exam question was written incorrectly, which is why
    a base case of 6 is needed.)
    Proof: by induction on n
    Let P(n) be the proposition that for every positive integer n, a_n >= (sqrt(2))^n

    Base: n = 6, a_n = 8
    8 >= (sqrt(2))^6
    8 >= 2^3
    8 >= 8
    P(6) holds

    Inductive step: Assume P(k) is true for any positive integer k where k > 6, that is:
                                    a_k >= (sqrt(2))^k
    Now show that P(k+1) is true, that is:
                                a_{k+1} >= (sqrt(2))^{k+1}

                                a_{k+1} = a_k + a_{k-1}
                                a_k + a_{k-1} >= (sqrt(2))^k + (sqrt(2))^{k-1}
                                               = (sqrt(2))^k + (1/sqrt(2))(sqrt(2))^k
                                               = (sqrt(2))^k(1 + 1/sqrt(2))
                                               = (sqrt(2))^k * (~1.707)
                                a_k + a_{k-1} >= (sqrt(2))^k * (sqrt(2)) //(~1.414)
                                               = (sqrt(2))^{k+1}
                                a_{k+1} >= (sqrt(2))^{k+1}
    Therefore P(k+1) holds

    Therefore P(k) -> P(k+1)

    2.
    syntax: xcy = x choose y

    4 digit code: XXXX
    10 total digits: 0123456789

    a. No digit is repeated:
    (10 choices) * (9 choices) * (8 choices) * (7 choices)
    10 * 9 * 8 * 7 possible combinations

    b. No digit is repeated, and they must appear in ascending order:
    We have 10 digits, and of those 10 we must choose 4
    0x 1x 2x 3x 4 5 6 7 8 9
    0 1x 2 3x 4 5 6x 7 8 9x
    0 1 2 3 4x 5x 6x 7x 8 9
    etc...
    10c4 possible combinations

    3.
    When rolling two dice, there are 6^2, or 36 total outcomes

    Non-game ending events:
    (1, 1), (1, 2), (1, 3), (1, 4), (1, 5), (1, 6) -> 6 combinations when first dice is an odd roll
    (2, 1), (2, 3), (2, 5) -> 3 combinations when first dice is an even roll
    possible combinations: 6*3 + 3*3 = 18 + 9 = 27

    Game ending events:
    total outcomes - non-game ending events = 36 - 27 = 9

    Let X be a random variable that describes the number of rolls in a game
    X = 1 -> game ended on the first roll
    X = 2 -> game ended on the second roll
    X = 3 -> game ended on the third roll
    X = 4 -> game might have ended, might not have

    X = 1, p(x) = 9/36 = 1/4
    X = 2, p(x) = (27/36) * (9/36) = 3/16
    X = 3, p(x) = (27/36) * (27/36) * (9/36) = 9/64
    X = 4, p(x) = (27/36) * (27/36) * (27/36) * (36/36) = 27/64

    Distribution: {(1, 1/4), (2, 3/16), (3, 9/64), (4, 27/64)}

    E[X] = 1*(1/4) + 2*(3/16) + 3*(9/64) + 4*(27/64)
         = 175/64

    4.
    a. Analyze the runtime of func:
    Syntax: log_2(x) = lg(x)
    Ignoring constant runtime elements

    (if n = 100000000, log(n) = 8, lg(log(n)) = 3, outer loop runs 4 times, inner loop runs 8 times)
    1 + 2 + 4 + ... + 8 (in the described case)
    1 + 2 + 4 + ... + log(n) = 2^{lg(log(n)) + 1} - 1 = 2*log(n) - 1
    Tfunc = Theta(2*log(n) - 1) = Theta(log(n))

    b. Fixing Ben-El's code
    The code is faulty because first10Squares returns the address of a static array that only existed
    within the scope of first10Squares(). Once the function does its work, the arr[10] is wiped from the stack,
    but the global scope still needs to reference it. The global scope is instead referencing the address of a
    static array that no longer exists, effectively accessing arbitrary memory when calling the non-existent
    array's indices.

    The line that must be changed is the first line after int* first10Squares() {
    int arr[10]; must become int* arr = new int[10];

    If the array is created dynamically, i.e. added to the heap, it persists after first10Squares() finishes its work
    and can be successfully referenced in the global scope
*/
