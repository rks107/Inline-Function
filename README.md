# Inline-Function
use of inline function  || Oops concept
:
According to Oops private members of class can only be used by member function of that class. Even object of that class don't have rights to access private data.

Against this concept of Oops C++ provide concept of friend function that can able to access private data member of class without becoming a member. Since it is a special function so it has some special properties:
1. Declaration of friend function should be within a class by using friend funnction keyword.
2. Definition of friend function is outside of class, just like a general function.
3. During Definition friend keyword not necessarly.
4. Friends function don't need object fo calling, so it call just like a general function.
5. Friend function need object of class to access private data, so in every friend function we must pass object of that class for which it become friend.
6. Pritected label of class don't effect on friend function.
