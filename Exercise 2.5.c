/*
include <stdio.h>

int main (Void) <- Void should be lowercase, not capitalized.
( <- This should be a curly bracket instead of a parentheses.
		INT sum; <- INT should be lowercase.
		/* COMPUTE RESULT  <- This line doesn't have a close to the comment.
		sum = 25 + 37 - 19 <- No semicolon after this line.
		/* DISPLAY RESULTS // <- Uses the wrong closing for the comment.
		printf ("The answer is %i\n" sum); <- Missing a comma between the quotation marks and sum.
		return 0;
}
*/
// A working version:

#include <stdio.h>

int main(void)
{
		int sum;
		// Compute result:
		sum = 25 + 37 - 19;
		// Display results:
		printf ("The answer is %i.\n", sum);
		return 0;
}