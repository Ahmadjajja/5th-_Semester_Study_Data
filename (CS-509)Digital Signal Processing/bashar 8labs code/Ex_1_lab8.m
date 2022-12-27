% lab 8 exercise1 question 1
A=[1 5 10 4; 14 2 3 9 ; 6 7 8 1 ]
sz=size(A)
% lab 8 exercise1 question 2
B=[1 4 5 6 7]
% lab 8 exercise1 question 3
C=[1;5;6;8;9]
% lab 8 exercise1 question 4
T=[1 4 5 6 7]
Z=diag(T)
% lab 8 exercise1 question 5
D=horzcat(A,A)
% lab 8 exercise1 question 6
numeric=10:20
% lab 8 exercise1 question 7
numeric2=-10:20
% lab 8 exercise1 question 8
num=100:80
% lab 8 exercise1 question 9
num2=0:10:100
% lab 8 exercise1 question 10
num3=10.5:1.5:20.5
% lab 8 exercise1 question 11
A(5,5)=11
% lab 8 exercise1 question 12
A(4:5)=[2 0]
% lab 8 exercise1 question 13
ind=find(A==3)
% lab 8 exercise1 question 14
A(2,:)=[]
% lab 8 exercise1 question 15
A(:,1)=[]
% lab 8 exercise1 question 16
J=rand(3,4,6)
%r=reshape(J,2,6)
% lab 8 exercise1 question 17
B=A.'
% lab 8 exercise1 question 18
B=flipud(A)
% lab 8 exercise1 question 19
C=fliplr(A)
% lab 8 exercise1 question 20
M=[1 2 3 4 ; 8 9 10 11; 5 6 7 12]
% lab 8 exercise1 question 21
C=circshift(M,[1,0])
% lab 8 exercise1 question 22
mat=[1 2 ; 3 4]
B=rot90(mat)
% lab 8 exercise1 question 23
s=magic(4)
G=sort(s)
% lab 8 exercise1 question 24
u=sort(s,'descend')
% lab 8 exercise1 question 25
e=sort(s,2,'ascend')
% lab 8 exercise1 question 26
c=sort(s,2,'descend')

