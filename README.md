# Evolutionary-Computation
Assignments 1
Black box optimization part 1
Write a hillclimber to maximize the function double eval(int *vec) contained in each of the the two object files below. These are two black box functions and I want you to try maximize both. Black box means that you do not know what the function does -- all you know is that if you send it a (int *vec) , it will return a double , in the range 0 through 100. main.cpp contains a sample call and return from eval. The size of the integer vector is 100.

Not only do I want the maximum returned by the function, I also want the value of each element in vec when evaluating vec causes the function to reach its maximum.

A sample main.cpp and links to

eval.o (max == 100) and eval1.o (max = 100) for the linux lab machines.
You will need to use g++ for your compilation. You can use C or C++ to implement your algorithm but you must use the linux g++ compiler for compilation.

% g++ -o solver main.cpp eval.o

Should compile your hill climber in main.cpp with the eval function in eval.o

Assume that vec can only contain 0's or 1's, that is, it is a bit string. Going thru all 2^100 combinations of the 100 bit vector is not a viable option.
You will defend your strategy and explain why it failed (or succeeded). In other words, if you find the correct solution, you have to explain how and why your algorithm worked. If it failed, I once again want to know why. Thus, simply applying an algorithm you found on the web is also not a viable option -- only apply an algorithm you know and understand.

You will also state and analyze your algorithms advantages and weaknesses.

Black box optimization part 2

Write an eval with the same signature as above and that is difficult to climb for your hillclimber. Unlike my eval, your eval need not return a number between 0 and 100. You do need to tell me what the min and max are. I will need you to place the source file of your eval on your web page.

General rules
You may talk strategies but no code sharing. You are, of course, free to use the web or other resources to come up with implementations that attack the problem below. Do not use a genetic or other evolutionary computing algorithm. Good Luck

Turning it in
Please turn in
A report that describes your strategy and an explanation of why it failed (or succeeded) as well as an analysis of your algorithm's strengths and weaknesses. Describe your eval .
A script of your algorithms. I will also need both your hillclimber and your eval code. The code can be cut and pasted into your report. It would be good if your code retained your IDE's indentation and color coding.
Your grade depends on how well your algorithms work and how well you are able to describe why your algorithms work as well as they do.
