%Exersice 2 Example 1 for loops
x = ones(1, 10);
for n = 2:6
    x(n) = 2*x(n-1)
end
%Exersice 2 Example 2 while loop
n = 1;
nFectorial = 1;
while nFectorial < 1e100
    n = n+1;
    nFectorial = nFectorial *n;
end
%Exersice 2 Example 3 nested loop
A = zeros(5, 100);
for m = 1:5
    for n = 1:100
        A(m, n) = 1/(m+n-1)
    end
end
