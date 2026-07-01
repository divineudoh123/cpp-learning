// comments.cpp
// Practicing how comments work in C++.
// A "comment" is a note for humans. The compiler ignores it completely,
// so comments never change what your program does.

// -------------------------------------------------------------------
// 1. SINGLE-LINE COMMENTS
// -------------------------------------------------------------------
// Anything after two slashes ( // ) is a comment until the end of the line.

int speed = 88;  // you can also put a comment at the end of a line of code

// -------------------------------------------------------------------
// 2. MULTI-LINE (BLOCK) COMMENTS
// -------------------------------------------------------------------
/*
   Anything between slash-star and star-slash is a comment,
   even if it spans several lines.
   Handy for longer explanations.
*/

/* A block comment can also be short and on one line. */

// -------------------------------------------------------------------
// 3. COMMENTING OUT CODE
// -------------------------------------------------------------------
// You can temporarily disable a line of code by turning it into a comment.
// The compiler will skip it:

// int brokenLine = ;   // <- this would be an error, so we "comment it out"

// -------------------------------------------------------------------
// 4. GOOD HABITS
// -------------------------------------------------------------------
// - Explain WHY, not just WHAT. The code already shows what it does.
// - Keep comments short and honest; update them when the code changes.
//
// Note: this file has no main() function on purpose. main() lives in
// main.cpp. This file is just practice, so it doesn't run on its own,
// and that's perfectly fine.
