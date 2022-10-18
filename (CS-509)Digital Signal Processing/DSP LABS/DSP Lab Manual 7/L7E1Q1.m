% Q1
N = 20;
f(1) = 0;
f(2) = 1;
for n= 3:N
    f(n)=f(n-1)+f(n-2);
end
f(1:20)