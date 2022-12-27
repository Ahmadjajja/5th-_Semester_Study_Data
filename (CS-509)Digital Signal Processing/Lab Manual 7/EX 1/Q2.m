%Exercise 1 Q2
%2. Calculate and display 1st 15 numbers of fibonacci sequence when 1st two
%numbers are 1 and 2, using loop.
O = 15;
F(1) = 1;
F(2) = 2;
for n = 3:O
    F(n) = F(n-1) + F(n-2);
end
F(1:15)