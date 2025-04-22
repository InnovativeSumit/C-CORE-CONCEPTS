// ---------------------------
// Identifiers in C
// ---------------------------

// Identifiers are the names used for variables, functions, arrays, structures, etc.

// Rules for writing identifiers:

// 1. An identifier can only contain letters (A-Z or a-z), digits (0-9), and underscores (_).
//    Example: total_sum, _count, value1

// 2. An identifier **must begin** with a letter (A-Z or a-z) or an underscore (_).
//    It **cannot** start with a digit.
//    Invalid: 1value, 9count

// 3. Identifiers are **case-sensitive**.
//    Example: total and Total are different identifiers.

// 4. You **cannot** use C **keywords** (reserved words) as identifiers.
//    Example: int, return, void, if, else, etc., cannot be used as variable names.

// 5. There is typically a length limit for identifiers in older C standards (like ANSI C),
//    but modern compilers usually support longer names.

// Naming conventions (recommended, not enforced):

// - Variable and function names are usually written in lowercase.
//   Example: sum, calculate_area

// - Constants are written in uppercase with underscores.
//   Example: MAX_SIZE, PI

// - Use descriptive names to improve code readability.
//   Example: int studentScore; // better than int s;

// - Avoid using underscores at the beginning of identifiers for user-defined names,
//   as they are often reserved by the compiler or standard libraries.

// Examples of valid identifiers:
int count;
float average_score;
char _initial;

// Examples of invalid identifiers:
// int 1count;     // Invalid: starts with a digit
// float return;   // Invalid: 'return' is a keyword
// char first-name; // Invalid: hyphens not allowed

