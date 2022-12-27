%Exercise 1 Question Number 
%1.Calculate and dsplay first 20 numbers of fibonacci sequence when first
%two numbers are 1 using loop
M = 20;
F(1) = 1;
F(2) = 1;
for n = 3:M
    F(n) = F(n-1) + F(n-2);
end
F(1:20)