Define function gcd3 which takes three ints as input an returns their greatest common divisor. (Assume the inputs are positive.) Suggested algorithm: If a = b = c then gcd(a, b, c) returns a; otherwise, replace the largest of a, b, c with the difference between the largest and the smallest, then recursively compute gcd(a, b, c). Example state transitions:

gcd(10, 25, 30) = gcd(10, 25, 20) = gcd(10, 15, 20) = gcd(10, 15, 10) = gcd(10, 5, 10) = gcd(10,5,5) = gcd(5,5,5)=5.
