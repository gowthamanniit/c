/*
  2. Relational operator:
  =======================

	use: to check true or false

	note: do not check string

		operator name

			<	less than
			<=	less than or equal to
			>	greater than
			>=	greater than or equalto
			==	equal
			!=	not equal



3) logical operator

	use:    to check multiple condition

	&&    logical and       (any one false - result: false)
	||    logical or        (any one true  - result: true)
	!     logical not	true = false, false=true


4) assignment operator

   use: to store in memory

   note:(dont use string)

       left side = right side;
       variable  = value;
       variable  = variable;
       variable +=variable;
       variable +=value;
	ex:
	int a,b=20;

	a = 10
	a = b;      // 20
	a+=10;  //a=a+10   // 30
	a+=b;   //a=a+b    // 50


	=
	+=
	-=
	*=
	/=
	%=

	error:
	======
	10=a;
	10=20;

	difference
	=	(store)
	==      (check 1 or 0)

 5) increment or decrement operator
	or
    unary operator

	++  increment operator
	--  decrement operator

    two types:

	pre increment/decrement
	 ex:
	     ++a   meaning a=a+1
	     --b
	post increment/decrement
	     a++
	     b--
 6) conditional operator
    or
    ternary operator

	syntax:

	exp1?exp2:exp3
	ex:
	a=10;
	b=20;
	res=a>b?a:b;



	expression:
			a>b
			a
			a>b && a>c
			!(a<b)
			a>b?a:b


  7) bitwise operator
  ====================

	&  - bitwise and
	|  - bitwise or
	^  - bitwise xor
	<< - left shift


	0000-0
	0001-1
	0010-2
	0011-3
	0100-4
	0101-5
	0110-6
	0111-7
	1000-8
	1001-9
	1010-10
	1011-11
	1100-12
	1101-13
	1110-14
	1111-15


	1011
	1100
	0111

	note:
		both true: false
		both false: false

 8) sizeof operator

	sizeof(variable)

*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int a=3,c;
 char d[20];                   // a=a+1
 clrscr();

 c=sizeof(d);  // 0011

 printf(" %d ",c);

 getch();
}