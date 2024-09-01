int gcd(int a, int b)
{  
return b==0 ? a : gcd(b, a%b) ;   
}

//lcm = (a*b) / __gcd(a,b); 