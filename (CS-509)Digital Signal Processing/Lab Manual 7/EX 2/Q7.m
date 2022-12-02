 %Exersice 2 Q6
 %6. Write a Matlab code to calculate and display sum of 1st 20 even numbers
%using loop.
sum = 0;
for N = 1:40 
     if rem(N,2) == 0
         sum = sum + N;
     end
end
 sum
 