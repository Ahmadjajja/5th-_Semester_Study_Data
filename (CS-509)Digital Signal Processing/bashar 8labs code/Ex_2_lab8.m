%Example:
%Array indexing

A=[1 2 3 4;5 6 7 8;9 10 11 12 ; 13 14 15 16]

e=A(3,2)

%Multiple element

e=A(2,[1 3])


r=A(1:3,2:4)

r=A(1:3,2:end)

c=A(:,3)


%Timedate
t=[datetime(2018,1:5,1); datetime(2019,1:5,1)]

march1=t(:,3)

%indexing with a single index


A=[12 36 91;45 29 48; 33 25 11]


%linear
A(:)

e=A(3,2)

e=A(6)

s=sum(A(:))



%indexing with logical values:

A=[1 2 6;4 3 6]
B=[0 3 7;3 7 5]
ind=A<B


Avals=A(ind)
Bvals=B(ind)




%Multidimensional Arrays

A=[1 2 3;4 5 6; 7 8 9]

A(:,:,2)=[10 11 12; 13 14 15; 16 17 18]

B=cat(3,A,[3 2 1; 0 9 8;5 3 7])



%Add forth page

B(:,:,4)=0




%Accessing Elements:

A

elA=A(1,2,2)

c=A(:,[1 3])

%find the second and third rows of each page use the colon:

D=A(2:3,:,:)




%Manipulating Array:


A=[1 2 3 4 5;9 0 6 3 7;8 1 5 0 2];

A(:,:,2)=[9 7 8 5 2 ;3 5 8 5 1;6 9 4 3 3];
B=reshape(A,[6 5])













%Exerciseno.2 LAb 8
%Q1  Create following Matrix A, display element on 3rd row and 2nd column.
A=[1 2 3 4 ;16 15 14 13; 5 6 7 8;9 10 11 12]
A(3,2)
%Q2  From original matrix A, display elements from 2nd row and 1st and 3rd column only. Out put will be 16 and 14 only. 
A(2,[1 3])
%Q4  Display sum of all elements of original matrix A using linear indexing.
S=sum(A(:))
%Q5  Create matrix B .............
A=[1 2 3 4 ;16 15 14 13; 5 6 7 8;9 10 11 12]
B=[2 4 1;6 3 2]
C=[8 3 2;3 1 5]
 %c=A<B
%error occur because order of row and column not equal.
%Q6  Create multi dimensional array Z of size 3*3 

%Z(:,:,1)=[1 2 3;4 5 6; 9 8 7]
%z(:,:,2)=[10 11 12; 13 14 15; 18 17 16]

%z(:,:,3)=[19 20 21;22 23 24; 25 26 27]
%Q7  Add page 4 in 3D array A having all elements 0.
A(:,:,4)=0
%Q8  Display all rows and all columns of page 2.
%Z(1:3,1:3,2)
%Q9  Diplay element on 2nd row, 2nd column and 3rd page.
%z(2,2,3)
%Q10 Display element on 3rd row, 1st column and 2nd page.
%z(3,1,2)
%Q11 Display elements of 2nd and 3rd row, all columns of 1st page.
%some mistake...........
z(2:3,:,2)
%Q12  Display elements of 1st and 2nd row, 2nd and 3rd columns of 2nd page.
z(1:2,2:3,2)
%Q13 Display elements of all rows and 3rd column of page 3rd
z(:,3,3)
%Q14 Display elements of 2nd row and all columns of page 3rd
z(2,:,3)
















