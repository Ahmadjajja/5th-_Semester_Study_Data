


%Exercise 1


%Q1 Create following Matrix A and display its size

A=[1 5 10 4;14 2 3 9; 6 7 8 1]
sz=size(A)


%Q2 Create a row vector B with 5 columns.
B=1:5


%Q3  Create a column vector C with 5 rows.
C=5:1



%Q4  Create a matrix D of size 5*5 whose diagonal elements are the elemnts of matrix B, using diag function.


a=zeros(5,5)
B=diag(B)


%Q5 Concatenate Matrix A with itself horizontaly.

C=[A,A]


%Q6  Generate a numeric sequence from 10 to 20 using colon.


N=10:3:20


%Q7  Generate a number sequence from -10 to 20 with gaps of 2.
N=-10:2:20

%Q8 Generate a number sequence from 100 to 80.

N=-100:80


%Q9 Generate a number sequence from 100 to 0 with gaps of 10.
 N=-100:10:0
 
 
 %Q10 Generate a number sequence from 10.5 to 20.5 with gaps of 1.5.
  N=10.5:1.5:20.5
  
  
  
  
  %Q11 Add new number 11 in original matrix A in 5th row and 5th column.
  
  
  A(5,5)=11
  %Q12
  A(5:6, 5:7)= [2 0 3; 1 6 4]
 
 
 
 %Q13 Find element 3 in original matrix A using find function.

 [row,col] =find(A==3)
 
 %Q14 Remove 2nd row from original matrix A.
 

A(2,:)=[]

%Q15  Remove 1st column from original matrix A.

A(:,1)=[]


%Q16  Create Matrix Z of size 3*4 using magic function and reshape it into size 2*6.


Z=magic(4)
R=reshape(Z,2,8)


%Q17  Take transpose of original matrix A.

T=A'


%Q18  Flip rows of original matrix A up to down direction.


F=flipud(A)

%Q19  Flip columns of original matrix B in left to right direction. 


F=fliplr(B)




%Q20  Create following matrix M and shift its columns to right by 2.


M=[1 2 3 4;8 9 10 11; 5 6 7 12]

S=circshift(M,[0 2])

%Q21  Shift rows up by 1 and keep the columns in place using original matrix M.

S=circshift(M,[1 0])

%Q22 . Create a matrix of size 2*2 and rotate it on 90 degree

R=[1 2;3 4]
rot90(R)


%Q23 Sort elements of original matrix M in ascending order.
M=[1 2 3 4;8 9 10 11; 5 6 7 12]
sort(M)


%Q24 Sort elements of original matrix M in descending order.
M=[1 2 3 4;8 9 10 11; 5 6 7 12]
sort(M, 'descend')



%Q25 Sort only rows of original matrix M in ascending order.
M=[1 2 3 4;8 9 10 11; 5 6 7 12]
sortrows(M)


%Q26 Sort only rows of original matrix M in descending order.
M=[1 2 3 4;8 9 10 11; 5 6 7 12]
sortrows(M,'descend')


