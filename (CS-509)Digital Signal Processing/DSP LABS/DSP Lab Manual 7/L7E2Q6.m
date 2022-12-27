%Q6
sum =0
for n=1:60
    if (rem(n,2)==1)
        sum=sum+n
    end
end
disp(sum)