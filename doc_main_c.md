#The purpose of each test case:
---
- 1.Basic String Printing:

 * Objective: To test if your _printf function can handle a fundamental use case—printing a basic string.
---
 * Significance: Verifies the essential functionality of printing strings, a core aspect of any printf-like function.

- 2.Printing Lengths using %d and %i:

 * Objective: To compare the lengths returned by _printf and printf for the same string.

 * Significance: Ensures that the length calculation in your _printf matches the behavior of the standard printf.

- 3.Printing Negative Integers:

 * Objective: To test the capability of your _printf function to correctly print negative integers.

 * Significance: Verifies the handling of the %d specifier with negative values.

- 4.Printing Unsigned Integers:

 * Objective: To confirm that your _printf correctly handles the %u specifier for unsigned integers.

 * Significance: Exercises the function's ability to print non-negative integers.

- 5.Printing Unsigned Octal:

* Objective: To verify the correct printing of unsigned octal numbers using the %o specifier.

* Significance: Tests an alternative numeric base for representation.

- 6.Printing Unsigned Hexadecimal:

 * Objective: To ensure correct printing of unsigned hexadecimal numbers using %x and %X.

 * Significance: Tests the function's ability to represent numbers in hexadecimal format.

- 7.Printing Characters:

 * Objective: To test the %c specifier for printing individual characters.

 * Significance: Validates the handling of character-based specifiers.

- 8.Printing Strings:

 * Objective: To confirm that your _printf function can correctly print strings using the %s specifier.

 * Significance: Exercises the handling of strings, a common use case.

- 9. Printing Addresses:

 * Objective: To verify the ability to print addresses using the %p specifier.

 * Significance: Tests the representation of memory addresses.

- 10.Printing Percent Sign:

 * Objective: To ensure that the percent sign is correctly printed when using %%.

 * Significance: Validates the handling of the literal percent sign.

- 11.Testing Unknown Specifier (%r assumed):
 
 * Objective: To address a hypothetical scenario with an unknown specifier, assuming %r.

 * Significance: Highlights how your _printf function handles unknown or custom specifiers.

- 12.Testing with INT_MAX:

  * Objective: To test how well your _printf function handles the maximum representable integer.

  * Significance: Validates the handling of the %d specifier with the maximum integer value.

- 13.Testing with INT_MIN:

 * Objective: To test how well your _printf function handles the minimum representable integer.

 * Significance: Validates the handling of the %d specifier with the minimum integer value.
