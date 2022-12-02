%Example 1 loops
N = 100;
f(1) = 1;
f(2) = 1;
for n = 3:N
    f(n) = f(n-1)+f(n-2)
end
f(1:10)
%Example 2 Condition loops
num = randi(100);
if num < 28
    sz = 'low'
elseif num < 67
    sz = 'medium'
else
    sz = 'high'
end
f(1:20)
%Exersice = 1 Question 1 
%calculate and display first 20 fibancci number with first numbers 1 and 1
M = 20;
f(1) = 1;
f(2) = 1;
for n = 3:M
    f(n) = f(n-1)+f(n-2)
end
f(1:20)
%Exersice = 1 Question 2
%calculate and display first 15 fibancci number with first numbers 1 and 2
O = 15;
f(1) = 1;
f(2) = 2;
for o = 3:O
    f(o) = f(o-1)+f(o-2)
end
f(1:15)
 