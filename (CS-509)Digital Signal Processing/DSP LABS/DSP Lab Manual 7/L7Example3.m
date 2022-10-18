% Loop Control Statements
% for loop
% example 3
x = ones(1,10);
for n = 2:6
    x(n) = 2 * x(n-1)
end
