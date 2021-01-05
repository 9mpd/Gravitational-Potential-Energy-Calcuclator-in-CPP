# Gravitational-Potential-Energy-Calcuclator-in-CPP
Gravitational Potential Energy Calculator with % Error in the result. 

As we all know area under the force ( F )and displacement
( x0 to x1 ) curve gives the work done in displacing the body
from one to another point (x0 to x1). Therefore we will
calculate the area under the F-x curve by doing the
integration :
        W = ∫F. dx           (x0 to x1)
Since the G.P.E. at x1 is not zero. On taking the negative of
this work done we will get the change in potential energy
of the body ( G.P.E. at x0 -G.P.E. at x1). Since we can’t set x1
= ∞ in C++ (as we are writing code in CPP) we will set x1
for maximum possible value. In this way we aren’t getting
the absolute potential energy of the body at the given
point (x0). But we can get the approximate value of the
potential energy at that point.
Now, by using the formula : 
        G.P.E = -GM1M2/x
We will calculate the potential energy at x = x0. And, then
we will compare these two values to calculate error in our
first approach.
        
