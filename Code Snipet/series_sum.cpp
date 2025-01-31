// x^1 + x^2 + x^3 + ....... + x^n
//Method-1 
// Even n:  
// f(n) = f(n/2) + x^(n/2) * f(n/2);
// Odd n:
// f(n) = f(n-1) * x^n;


//Method -2 
//Even n:
// f(x,n) = (1+x) * f(x^2, n/2);
// Odd n:
// f(n) = 1 + x * f(x, n-1);


// i*x^i 
// 1*x^1 + 2*x^2 + 3*x^3 + 4*x^4 + ......
// Even n:
// f(n) = f(n/2) + x^(n/2) * f(n/2) + n/2 * x^(n/2) * g(n/2);
// g(n) = x + x*x + x*x*x
// Odd n:
// f(n) = f(n-1) + n* x^n;