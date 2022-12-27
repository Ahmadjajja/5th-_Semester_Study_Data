 %Exersice 2 Q6
 %6. Write a Matlab code to calculate and display sum of 1st 20 odd numbers
%using loop.
sum = 0;
for N = 1:39
     if rem(N,2) == 1
         sum = sum + N;
     end
end
 